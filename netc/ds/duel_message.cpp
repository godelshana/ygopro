#include "utils/common.h"

#include "ocgcore/common.h"

#include "../config.h"
#include "../sgui.h"
#include "../gui_extra.h"
#include "../card_data.h"
#include "../image_mgr.h"

#include "duel_scene.h"
#include "duel_scene_handler.h"

namespace ygopro
{
    
    void DuelSceneHandler::Test(int32_t param) {
        switch(param) {
            case 1: {
                auto dm = std::make_shared<DuelMessage>();
                dm->msg_type = MSG_DAMAGE;
                BufferWriter writer(dm->msg_buffer);
                writer.Write<uint8_t>(0);
                writer.Write<uint32_t>(1000);
                messages.PushCommand(dm);
                break;
            }
            case 2: {
                auto dm = std::make_shared<DuelMessage>();
                dm->msg_type = MSG_RECOVER;
                BufferWriter writer(dm->msg_buffer);
                writer.Write<uint8_t>(0);
                writer.Write<uint32_t>(1000);
                messages.PushCommand(dm);
                break;
            }
            case 3: {
                auto dm = std::make_shared<DuelMessage>();
                dm->msg_type = MSG_PAY_LPCOST;
                BufferWriter writer(dm->msg_buffer);
                writer.Write<uint8_t>(0);
                writer.Write<uint32_t>(1000);
                messages.PushCommand(dm);
                break;
            }
            case 4: {
                auto dm = std::make_shared<DuelMessage>();
                dm->msg_type = MSG_LPUPDATE;
                BufferWriter writer(dm->msg_buffer);
                writer.Write<uint8_t>(0);
                writer.Write<uint32_t>(7777);
                messages.PushCommand(dm);
                break;
            }
            case 5: {
                auto dm = std::make_shared<DuelMessage>();
                dm->msg_type = MSG_BECOME_TARGET;
                BufferWriter writer(dm->msg_buffer);
                writer.Write<uint32_t>(CardPosInfo(0, 0x4, 1, 0).info);
                messages.PushCommand(dm);
                break;
            }
            case 9: {
                log_panel->Show(0);
                break;
            }
        }
    }
    
    int32_t DuelSceneHandler::SolveMessage(uint8_t msg_type, BufferReader& reader) {
        switch(msg_type) {
            case MSG_RETRY:
                break;
            case MSG_HINT: {
//                uint8_t hint_type = reader.Read<uint8_t>();
//                reader.Skip(1);
//                uint32_t hint_data = reader.Read<uint32_t>();
//                switch (hint_type) {
//                    case HINT_EVENT:
//                        break;
//                    case HINT_MESSAGE:
//                        break;
//                    case HINT_SELECTMSG:
//                        break;
//                    case HINT_OPSELECTED:
//                        break;
//                    case HINT_EFFECT:
//                        break;
//                    case HINT_RACE:
//                        break;
//                    case HINT_ATTRIB:
//                        break;
//                    case HINT_CODE:
//                        break;
//                    case HINT_NUMBER:
//                        break;
//                    case HINT_CARD:
//                        break;
//                    default:
//                        break;
//                }
                break;
            }
            case MSG_START:
                break;
            case MSG_WIN: {
//                uint8_t win_player = reader.Read<uint8_t>();
//                uint8_t win_reason = reader.Read<uint8_t>();
                break;
            }
            case MSG_UPDATE_CARD:
                break;
            case MSG_SELECT_BATTLECMD: {
//                int32_t playerid = reader.Read<uint8_t>();
//                int32_t act_sz = reader.Read<uint8_t>();
//                for(int32_t i = 0; i < act_sz; ++i) {
//                    uint32_t code = reader.Read<uint32_t>();
//                    uint32_t con = reader.Read<uint8_t>();
//                    uint32_t loc = reader.Read<uint8_t>();
//                    uint32_t seq = reader.Read<uint8_t>();
//                    uint32_t desc = reader.Read<uint32_t>();
//                }
//                int32_t atk_sz = reader.Read<uint8_t>();
//                for(int32_t i = 0; i < act_sz; ++i) {
//                    uint32_t code = reader.Read<uint32_t>();
//                    uint32_t con = reader.Read<uint8_t>();
//                    uint32_t loc = reader.Read<uint8_t>();
//                    uint32_t seq = reader.Read<uint8_t>();
//                    uint32_t param = reader.Read<uint8_t>();
//                }
//                bool can_m2 = reader.Read<uint8_t>() == 1;
//                bool can_ep = reader.Read<uint8_t>() == 1;
                break;
            }
            case MSG_SELECT_MAINCMD: {
//                int32_t playerid = reader.Read<uint8_t>();
//                int32_t summon_sz = reader.Read<uint8_t>();
//                for(int32_t i = 0; i < summon_sz; ++i) {
//                    uint32_t code = reader.Read<uint32_t>();
//                    uint32_t con = reader.Read<uint8_t>();
//                    uint32_t loc = reader.Read<uint8_t>();
//                    uint32_t seq = reader.Read<uint8_t>();
//                }
//                int32_t spsummon_sz = reader.Read<uint8_t>();
//                for(int32_t i = 0; i < spsummon_sz; ++i) {
//                    uint32_t code = reader.Read<uint32_t>();
//                    uint32_t con = reader.Read<uint8_t>();
//                    uint32_t loc = reader.Read<uint8_t>();
//                    uint32_t seq = reader.Read<uint8_t>();
//                }
//                int32_t repos_sz = reader.Read<uint8_t>();
//                for(int32_t i = 0; i < repos_sz; ++i) {
//                    uint32_t code = reader.Read<uint32_t>();
//                    uint32_t con = reader.Read<uint8_t>();
//                    uint32_t loc = reader.Read<uint8_t>();
//                    uint32_t seq = reader.Read<uint8_t>();
//                }
//                int32_t mset_sz = reader.Read<uint8_t>();
//                for(int32_t i = 0; i < mset_sz; ++i) {
//                    uint32_t code = reader.Read<uint32_t>();
//                    uint32_t con = reader.Read<uint8_t>();
//                    uint32_t loc = reader.Read<uint8_t>();
//                    uint32_t seq = reader.Read<uint8_t>();
//                }
//                int32_t sset_sz = reader.Read<uint8_t>();
//                for(int32_t i = 0; i < sset_sz; ++i) {
//                    uint32_t code = reader.Read<uint32_t>();
//                    uint32_t con = reader.Read<uint8_t>();
//                    uint32_t loc = reader.Read<uint8_t>();
//                    uint32_t seq = reader.Read<uint8_t>();
//                }
//                int32_t act_sz = reader.Read<uint8_t>();
//                for(int32_t i = 0; i < act_sz; ++i) {
//                    uint32_t code = reader.Read<uint32_t>();
//                    uint32_t con = reader.Read<uint8_t>();
//                    uint32_t loc = reader.Read<uint8_t>();
//                    uint32_t seq = reader.Read<uint8_t>();
//                    uint32_t desc = reader.Read<uint32_t>();
//                }
//                bool can_bp = reader.Read<uint8_t>() == 1;
//                bool can_ep = reader.Read<uint8_t>() == 1;
                break;
            }
            case MSG_SELECT_EFFECTYN: {
//                int32_t playerid = reader.Read<uint8_t>();
//                uint32_t code = reader.Read<uint32_t>();
//                uint32_t info_loc = reader.Read<uint32_t>();
                break;
            }
            case MSG_SELECT_YESNO: {
//                int32_t playerid = reader.Read<uint8_t>();
//                uint32_t desc = reader.Read<uint32_t>();
                break;
            }
            case MSG_SELECT_OPTION: {
//                /*int selecting_player = */BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_options.clear();
//                for (int i = 0; i < count; ++i)
//                    mainGame->dField.select_options.push_back(BufferIO::ReadInt32(pbuf));
//                mainGame->gMutex.Lock();
//                mainGame->SetStaticText(mainGame->stOptions, 310, mainGame->textFont,
//                                        (wchar_t*)dataManager.GetDesc(mainGame->dField.select_options[0]));
//                mainGame->btnOptionp->setVisible(false);
//                if(count > 1)
//                    mainGame->btnOptionn->setVisible(true);
//                else mainGame->btnOptionn->setVisible(false);
//                mainGame->dField.selected_option = 0;
//                if(select_hint)
//                    myswprintf(textBuffer, L"%ls", dataManager.GetDesc(select_hint));
//                else myswprintf(textBuffer, dataManager.GetSysString(555));
//                select_hint = 0;
//                mainGame->wOptions->setText(textBuffer);
//                mainGame->PopupElement(mainGame->wOptions);
//                mainGame->gMutex.Unlock();
                break;
            }
            case MSG_SELECT_CARD: {
//                /*int selecting_player = */BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_cancelable = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_min = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_max = BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.selectable_cards.clear();
//                mainGame->dField.selected_cards.clear();
//                int c, l, s, ss;
//                unsigned int code;
//                bool panelmode = false;
//                mainGame->dField.select_ready = false;
//                ClientCard* pcard;
//                for (int i = 0; i < count; ++i) {
//                    code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                    c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                    l = BufferIO::ReadInt8(pbuf);
//                    s = BufferIO::ReadInt8(pbuf);
//                    ss = BufferIO::ReadInt8(pbuf);
//                    if ((l & LOCATION_OVERLAY) > 0)
//                        pcard = mainGame->dField.GetCard(c, l & 0x7f, s)->overlayed[ss];
//                    else
//                        pcard = mainGame->dField.GetCard(c, l, s);
//                    if (code != 0 && pcard->code != code)
//                        pcard->SetCode(code);
//                    pcard->select_seq = i;
//                    mainGame->dField.selectable_cards.push_back(pcard);
//                    pcard->is_selectable = true;
//                    pcard->is_selected = false;
//                    if (l & 0xf1)
//                        panelmode = true;
//                }
//                std::sort(mainGame->dField.selectable_cards.begin(), mainGame->dField.selectable_cards.end(), ClientCard::client_card_sort);
//                if(select_hint)
//                    myswprintf(textBuffer, L"%ls(%d-%d)", dataManager.GetDesc(select_hint),
//                               mainGame->dField.select_min, mainGame->dField.select_max);
//                else myswprintf(textBuffer, L"%ls(%d-%d)", dataManager.GetSysString(560), mainGame->dField.select_min, mainGame->dField.select_max);
//                select_hint = 0;
//                if (panelmode) {
//                    mainGame->gMutex.Lock();
//                    mainGame->wCardSelect->setText(textBuffer);
//                    mainGame->dField.ShowSelectCard();
//                    mainGame->gMutex.Unlock();
//                } else {
//                    mainGame->stHintMsg->setText(textBuffer);
//                    mainGame->stHintMsg->setVisible(true);
//                }
                break;
            }
            case MSG_SELECT_CHAIN: {
//                /*int selecting_player = */BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                int specount = BufferIO::ReadInt8(pbuf);
//                int forced = BufferIO::ReadInt8(pbuf);
//                /*int hint0 = */BufferIO::ReadInt32(pbuf);
//                /*int hint1 = */BufferIO::ReadInt32(pbuf);
//                int code, c, l, s, ss, desc;
//                ClientCard* pcard;
//                bool panelmode = false;
//                mainGame->dField.chain_forced = (forced != 0);
//                mainGame->dField.activatable_cards.clear();
//                mainGame->dField.activatable_descs.clear();
//                mainGame->dField.conti_cards.clear();
//                for (int i = 0; i < count; ++i) {
//                    code = BufferIO::ReadInt32(pbuf);
//                    c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                    l = BufferIO::ReadInt8(pbuf);
//                    s = BufferIO::ReadInt8(pbuf);
//                    ss = BufferIO::ReadInt8(pbuf);
//                    desc = BufferIO::ReadInt32(pbuf);
//                    pcard = mainGame->dField.GetCard(c, l, s, ss);
//                    mainGame->dField.activatable_cards.push_back(pcard);
//                    mainGame->dField.activatable_descs.push_back(desc);
//                    pcard->is_selected = false;
//                    if(code >= 1000000000) {
//                        pcard->is_conti = true;
//                        pcard->chain_code = code % 1000000000;
//                        mainGame->dField.conti_cards.push_back(pcard);
//                        mainGame->dField.remove_act = true;
//                    }
//                    else {
//                        pcard->chain_code = code;
//                        pcard->is_selectable = true;
//                        pcard->cmdFlag |= COMMAND_ACTIVATE;
//                        if(l == LOCATION_GRAVE)
//                            mainGame->dField.grave_act = true;
//                        else if(l == LOCATION_REMOVED)
//                            mainGame->dField.remove_act = true;
//                        else if(l == LOCATION_EXTRA)
//                            mainGame->dField.extra_act = true;
//                        else if(l == LOCATION_OVERLAY)
//                            panelmode = true;
//                    }
//                }
//                if(!forced && (mainGame->ignore_chain || ((count == 0 || specount == 0) && !mainGame->always_chain))) {
//                    SetResponseI(-1);
//                    mainGame->dField.ClearChainSelect();
//                    if(mainGame->chkWaitChain->isChecked()) {
//                        mainGame->WaitFrameSignal(rnd.real() * 20 + 20);
//                    }
//                    DuelClient::SendResponse();
//                    return true;
//                }
//                if(mainGame->chkAutoChain->isChecked() && forced) {
//                    SetResponseI(0);
//                    mainGame->dField.ClearChainSelect();
//                    DuelClient::SendResponse();
//                    return true;
//                }
//                mainGame->gMutex.Lock();
//                mainGame->stHintMsg->setText(dataManager.GetSysString(550));
//                mainGame->stHintMsg->setVisible(true);
//                if(panelmode) {
//                    mainGame->dField.list_command = COMMAND_ACTIVATE;
//                    mainGame->dField.selectable_cards = mainGame->dField.activatable_cards;
//                    std::sort(mainGame->dField.selectable_cards.begin(), mainGame->dField.selectable_cards.end());
//                    auto eit = std::unique(mainGame->dField.selectable_cards.begin(), mainGame->dField.selectable_cards.end());
//                    mainGame->dField.selectable_cards.erase(eit, mainGame->dField.selectable_cards.end());
//                    mainGame->dField.ShowChainCard();
//                } else {
//                    if(!forced) {
//                        if(count == 0)
//                            myswprintf(textBuffer, L"%ls\n%ls", dataManager.GetSysString(201), dataManager.GetSysString(202));
//                        else
//                            myswprintf(textBuffer, L"%ls\n%ls", event_string, dataManager.GetSysString(203));
//                        mainGame->SetStaticText(mainGame->stQMessage, 310, mainGame->textFont, (wchar_t*)textBuffer);
//                        mainGame->PopupElement(mainGame->wQuery);
//                    }
//                }
//                mainGame->gMutex.Unlock();
                break;
            }
            case MSG_SELECT_PLACE:
            case MSG_SELECT_DISFIELD: {
//                /*int selecting_player = */BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_min = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.selectable_field = ~BufferIO::ReadInt32(pbuf);
//                mainGame->dField.selected_field = 0;
//                unsigned char respbuf[64];
//                int pzone = 0;
//                if (mainGame->dInfo.curMsg == MSG_SELECT_PLACE && mainGame->chkAutoPos->isChecked()) {
//                    int filter;
//                    if (mainGame->dField.selectable_field & 0x1f) {
//                        respbuf[0] = mainGame->dInfo.isFirst ? 0 : 1;
//                        respbuf[1] = 0x4;
//                        filter = mainGame->dField.selectable_field & 0x1f;
//                    } else if (mainGame->dField.selectable_field & 0x1f00) {
//                        respbuf[0] = mainGame->dInfo.isFirst ? 0 : 1;
//                        respbuf[1] = 0x8;
//                        filter = (mainGame->dField.selectable_field >> 8) & 0x1f;
//                    } else if (mainGame->dField.selectable_field & 0xc000) {
//                        respbuf[0] = mainGame->dInfo.isFirst ? 0 : 1;
//                        respbuf[1] = 0x8;
//                        filter = (mainGame->dField.selectable_field >> 14) & 0x3;
//                        pzone = 1;
//                    } else if (mainGame->dField.selectable_field & 0x1f0000) {
//                        respbuf[0] = mainGame->dInfo.isFirst ? 1 : 0;
//                        respbuf[1] = 0x4;
//                        filter = (mainGame->dField.selectable_field >> 16) & 0x1f;
//                    } else if (mainGame->dField.selectable_field & 0x1f000000) {
//                        respbuf[0] = mainGame->dInfo.isFirst ? 1 : 0;
//                        respbuf[1] = 0x8;
//                        filter = (mainGame->dField.selectable_field >> 24) & 0x1f;
//                    } else {
//                        respbuf[0] = mainGame->dInfo.isFirst ? 1 : 0;
//                        respbuf[1] = 0x8;
//                        filter = (mainGame->dField.selectable_field >> 30) & 0x3;
//                        pzone = 1;
//                    }
//                    if(!pzone) {
//                        if(mainGame->chkRandomPos->isChecked()) {
//                            respbuf[2] = rnd.real() * 5;
//                            while(!(filter & (1 << respbuf[2])))
//                                respbuf[2] = rnd.real() * 5;
//                        } else {
//                            if (filter & 0x4) respbuf[2] = 2;
//                            else if (filter & 0x2) respbuf[2] = 1;
//                            else if (filter & 0x8) respbuf[2] = 3;
//                            else if (filter & 0x1) respbuf[2] = 0;
//                            else if (filter & 0x10) respbuf[2] = 4;
//                        }
//                    } else {
//                        if (filter & 0x1) respbuf[2] = 6;
//                        else if (filter & 0x2) respbuf[2] = 7;
//                    }
//                    mainGame->dField.selectable_field = 0;
//                    SetResponseB(respbuf, 3);
//                    DuelClient::SendResponse();
//                    return true;
//                }
                break;
            }
            case MSG_SELECT_POSITION: {
//                /*int selecting_player = */BufferIO::ReadInt8(pbuf);
//                unsigned int code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                int positions = BufferIO::ReadInt8(pbuf);
//                if (positions == 0x1 || positions == 0x2 || positions == 0x4 || positions == 0x8) {
//                    SetResponseI(positions);
//                    return true;
//                }
//                int count = 0, filter = 0x1, startpos;
//                while(filter != 0x10) {
//                    if(positions & filter) count++;
//                    filter <<= 1;
//                }
//                if(count == 4) startpos = 10;
//                else if(count == 3) startpos = 82;
//                else startpos = 155;
//                if(positions & 0x1) {
//                    mainGame->imageLoading.insert(std::make_pair(mainGame->btnPSAU, code));
//                    mainGame->btnPSAU->setRelativePosition(rect<s32>(startpos, 45, startpos + 140, 185));
//                    mainGame->btnPSAU->setVisible(true);
//                    startpos += 145;
//                } else mainGame->btnPSAU->setVisible(false);
//                if(positions & 0x2) {
//                    mainGame->btnPSAD->setRelativePosition(rect<s32>(startpos, 45, startpos + 140, 185));
//                    mainGame->btnPSAD->setVisible(true);
//                    startpos += 145;
//                } else mainGame->btnPSAD->setVisible(false);
//                if(positions & 0x4) {
//                    mainGame->imageLoading.insert(std::make_pair(mainGame->btnPSDU, code));
//                    mainGame->btnPSDU->setRelativePosition(rect<s32>(startpos, 45, startpos + 140, 185));
//                    mainGame->btnPSDU->setVisible(true);
//                    startpos += 145;
//                } else mainGame->btnPSDU->setVisible(false);
//                if(positions & 0x8) {
//                    mainGame->btnPSDD->setRelativePosition(rect<s32>(startpos, 45, startpos + 140, 185));
//                    mainGame->btnPSDD->setVisible(true);
//                    startpos += 145;
//                } else mainGame->btnPSDD->setVisible(false);
//                mainGame->gMutex.Lock();
//                mainGame->PopupElement(mainGame->wPosSelect);
//                mainGame->gMutex.Unlock();
                break;
            }
            case MSG_SELECT_TRIBUTE: {
//                /*int selecting_player = */BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_cancelable = BufferIO::ReadInt8(pbuf) ? true : false;
//                mainGame->dField.select_min = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_max = BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.selectable_cards.clear();
//                mainGame->dField.selected_cards.clear();
//                int c, l, s, t;
//                unsigned int code;
//                ClientCard* pcard;
//                mainGame->dField.select_ready = false;
//                for (int i = 0; i < count; ++i) {
//                    code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                    c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                    l = BufferIO::ReadInt8(pbuf);
//                    s = BufferIO::ReadInt8(pbuf);
//                    t = BufferIO::ReadInt8(pbuf);
//                    pcard = mainGame->dField.GetCard(c, l, s);
//                    if (code && pcard->code != code)
//                        pcard->SetCode(code);
//                    mainGame->dField.selectable_cards.push_back(pcard);
//                    pcard->opParam = t;
//                    pcard->select_seq = i;
//                    pcard->is_selectable = true;
//                }
//                if(select_hint)
//                    myswprintf(textBuffer, L"%ls(%d-%d)", dataManager.GetDesc(select_hint),
//                               mainGame->dField.select_min, mainGame->dField.select_max);
//                else myswprintf(textBuffer, L"%ls(%d-%d)", dataManager.GetSysString(531), mainGame->dField.select_min, mainGame->dField.select_max);
//                select_hint = 0;
//                mainGame->gMutex.Lock();
//                mainGame->stHintMsg->setText(textBuffer);
//                mainGame->stHintMsg->setVisible(true);
//                mainGame->gMutex.Unlock();
                break;
            }
            case MSG_SELECT_COUNTER: {
//                /*int selecting_player = */BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_counter_type = BufferIO::ReadInt16(pbuf);
//                mainGame->dField.select_counter_count = BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.selectable_cards.clear();
//                int c, l, s, t/*, code*/;
//                ClientCard* pcard;
//                for (int i = 0; i < count; ++i) {
//                    /*code = */BufferIO::ReadInt32(pbuf);
//                    c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                    l = BufferIO::ReadInt8(pbuf);
//                    s = BufferIO::ReadInt8(pbuf);
//                    t = BufferIO::ReadInt8(pbuf);
//                    pcard = mainGame->dField.GetCard(c, l, s);
//                    mainGame->dField.selectable_cards.push_back(pcard);
//                    pcard->opParam = (t << 16) | t;
//                    pcard->is_selectable = true;
//                }
//                myswprintf(textBuffer, dataManager.GetSysString(204), mainGame->dField.select_counter_count, dataManager.GetCounterName(mainGame->dField.select_counter_type));
//                mainGame->gMutex.Lock();
//                mainGame->stHintMsg->setText(textBuffer);
//                mainGame->stHintMsg->setVisible(true);
//                mainGame->gMutex.Unlock();
//                break;
            }
            case MSG_SELECT_SUM: {
//                mainGame->dField.select_mode = BufferIO::ReadInt8(pbuf);
//                /*int selecting_player = */BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_sumval = BufferIO::ReadInt32(pbuf);
//                mainGame->dField.select_min = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.select_max = BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.selectsum_all.clear();
//                mainGame->dField.selected_cards.clear();
//                mainGame->dField.selectsum_cards.clear();
//                int c, l, s;
//                unsigned int code;
//                bool panelmode = false;
//                ClientCard* pcard;
//                for (int i = 0; i < count; ++i) {
//                    code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                    c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                    l = BufferIO::ReadInt8(pbuf);
//                    s = BufferIO::ReadInt8(pbuf);
//                    pcard = mainGame->dField.GetCard(c, l, s);
//                    if (code != 0 && pcard->code != code)
//                        pcard->SetCode(code);
//                    pcard->opParam = BufferIO::ReadInt32(pbuf);
//                    pcard->select_seq = i;
//                    mainGame->dField.selectsum_all.push_back(pcard);
//                    if ((l & 0xe) == 0)
//                        panelmode = true;
//                }
//                std::sort(mainGame->dField.selectsum_all.begin(), mainGame->dField.selectsum_all.end(), ClientCard::client_card_sort);
//                mainGame->dField.CheckSelectSum();
//                if(select_hint)
//                    myswprintf(textBuffer, L"%ls(%d)", dataManager.GetDesc(select_hint), mainGame->dField.select_sumval);
//                else myswprintf(textBuffer, L"%ls(%d)", dataManager.GetSysString(560), mainGame->dField.select_sumval);
//                select_hint = 0;
//                if (panelmode) {
//                    mainGame->wCardSelect->setText(textBuffer);
//                    mainGame->dField.ShowSelectCard();
//                } else {
//                    mainGame->stHintMsg->setText(textBuffer);
//                    mainGame->stHintMsg->setVisible(true);
//                }
                break;
            }
            case MSG_SORT_CHAIN:
            case MSG_SORT_CARD: {
//                /*int player = */BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                mainGame->dField.selectable_cards.clear();
//                mainGame->dField.selected_cards.clear();
//                mainGame->dField.sort_list.clear();
//                int c, l, s;
//                unsigned int code;
//                ClientCard* pcard;
//                for (int i = 0; i < count; ++i) {
//                    code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                    c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                    l = BufferIO::ReadInt8(pbuf);
//                    s = BufferIO::ReadInt8(pbuf);
//                    pcard = mainGame->dField.GetCard(c, l, s);
//                    if (code != 0 && pcard->code != code)
//                        pcard->SetCode(code);
//                    mainGame->dField.selectable_cards.push_back(pcard);
//                    mainGame->dField.sort_list.push_back(0);
//                }
//                if (mainGame->chkAutoChain->isChecked() && mainGame->dInfo.curMsg == MSG_SORT_CHAIN) {
//                    mainGame->dField.sort_list.clear();
//                    SetResponseI(-1);
//                    DuelClient::SendResponse();
//                    return true;
//                }
//                if(mainGame->dInfo.curMsg == MSG_SORT_CHAIN)
//                    mainGame->wCardSelect->setText(dataManager.GetSysString(206));
//                else
//                    mainGame->wCardSelect->setText(dataManager.GetSysString(205));
//                mainGame->dField.select_min = 0;
//                mainGame->dField.select_max = count;
//                mainGame->dField.ShowSelectCard();
                break;
            }
            case MSG_CONFIRM_DECKTOP: {
                int8_t playerid = LocalPlayer(reader.Read<uint8_t>());
                int32_t count = reader.Read<uint8_t>();
                int32_t dsize = (int32_t)g_player[playerid].deck.size();
                for(int32_t i = 0; i < count && i < dsize; ++i) {
                    int32_t code = reader.Read<uint32_t>();
                    g_player[playerid].deck[dsize - 1 - i]->SetCode(code);
                }
                std::vector<std::shared_ptr<Action<int64_t>>> acts;
                for(int32_t i = 0; i < count && i < dsize; ++i) {
                    auto ptr = g_player[playerid].deck[dsize - 1 - i];
                    acts.push_back(std::make_shared<ActionCallback<int64_t>>([ptr](){
                        ptr->UpdateTo(100, ptr->GetPositionInfo(CardPosParam::Confirm));
                    }));
                    acts.push_back(std::make_shared<ActionWait<int64_t>>(800));
                    acts.push_back(std::make_shared<ActionCallback<int64_t>>([ptr](){
                        ptr->UpdateTo(100, ptr->GetPositionInfo());
                    }));
                    acts.push_back(std::make_shared<ActionWait<int64_t>>(100));
                }
                PushMessageActions(acts);
                break;
            }
            case MSG_CONFIRM_CARDS: {
                /*int8_t playerid = */LocalPlayer(reader.Read<uint8_t>());
                int32_t count = reader.Read<uint8_t>();
                std::vector<FieldCard*> panel_confirm;
                std::vector<FieldCard*> field_confirm;
                for(int32_t i = 0; i < count; ++i) {
                    int32_t code = reader.Read<uint32_t>();
                    CardPosInfo pi(LocalPosInfo(reader.Read<int32_t>()));
                    auto ptr = GetCard(pi);
                    if(ptr) {
                        if(code)
                            ptr->SetCode(code);
                        if(pi.location & 0x41) {
                            if(count == 1)
                                field_confirm.push_back(ptr.get());
                            else
                                panel_confirm.push_back(ptr.get());
                        } else if((pi.location & (LOCATION_ONFIELD | LOCATION_HAND)) && (pi.position & POS_FACEDOWN))
                            field_confirm.push_back(ptr.get());
                    }
                }
                std::vector<std::shared_ptr<Action<int64_t>>> acts;
                if(field_confirm.size()) {
                    for(auto iter : field_confirm) {
                        auto npos = iter->GetPositionInfo(CardPosParam::Confirm);
                        iter->UpdateTo(100, npos);
                    }
                    acts.push_back(std::make_shared<ActionWait<int64_t>>(1000));
                    acts.push_back(std::make_shared<ActionCallback<int64_t>>([field_confirm]() {
                        for(auto iter : field_confirm) {
                            auto npos = iter->GetPositionInfo();
                            iter->UpdateTo(100, npos);
                        }
                    }));
                    acts.push_back(std::make_shared<ActionWait<int64_t>>(100));
                }
                if(panel_confirm.size()) {
                    message_lock = true;
                    acts.push_back(std::make_shared<ActionCallback<int64_t>>([this, panel_confirm]() {
                        OperationPanel::Confirm(panel_confirm, [this]() { message_lock = false; });
                    }));
                    PushMessageActionsNoLock(acts);
                } else {
                    PushMessageActions(acts);
                }
                break;
            }
            case MSG_SHUFFLE_DECK: {
                int32_t playerid = LocalPlayer(reader.Read<uint8_t>());
                uint32_t top_code = reader.Read<uint32_t>();
                if(g_player[playerid].deck.size() < 2)
                    break;
                auto cb_action1 = std::make_shared<ActionCallback<int64_t>>([playerid]() {
                    for(auto& pcard : g_player[playerid].deck)
                        pcard->TranslateTo(50, pcard->GetPositionInfo(CardPosParam::Shuffle).first);
                });
                auto wait1 = std::make_shared<ActionWait<int64_t>>(50);
                auto cb_action2 = std::make_shared<ActionCallback<int64_t>>([playerid]() {
                    for(auto& pcard : g_player[playerid].deck)
                        pcard->TranslateTo(50, pcard->GetPositionInfo().first);
                });
                auto wait2 = std::make_shared<ActionWait<int64_t>>(50);
                auto shuffle_action = std::make_shared<ActionSequence<int64_t>>(cb_action1, wait1, cb_action2, wait2);
                auto rep_action = std::make_shared<ActionRepeat<int64_t>>(shuffle_action, 2);
                if(g_duel.deck_reversed) {
                    g_duel.deck_reversed = false;
                    for(auto& pcard : g_player[playerid].deck) {
                        pcard->pos_info.position = POS_FACEDOWN;
                        pcard->RotateTo(100, pcard->GetPositionInfo().second);
                    }
                    auto wait_rev1 = std::make_shared<ActionWait<int64_t>>(150);
                    auto wait_int = std::make_shared<ActionWait<int64_t>>(100);
                    auto flip_action1 = std::make_shared<ActionCallback<int64_t>>([playerid, top_code]() {
                        g_duel.deck_reversed = true;
                        g_player[playerid].deck.back()->SetCode(top_code & 0x7fffffff);
                        if(top_code & 0x80000000)
                            g_player[playerid].deck.back()->pos_info.position = POS_FACEUP;
                        for(auto& pcard : g_player[playerid].deck)
                            pcard->RotateTo(100, pcard->GetPositionInfo().second);
                    });
                    auto wait_rev2 = std::make_shared<ActionWait<int64_t>>(100);
                    PushMessageActions(wait_rev1, rep_action, wait_int, flip_action1, wait_rev2);
                } else {
                    PushMessageActions(rep_action);
                }
                break;
            }
            case MSG_SHUFFLE_HAND: {
                int32_t playerid = LocalPlayer(reader.Read<uint8_t>());
                /*int32_t count = */reader.Read<uint8_t>();
                std::vector<uint32_t> code_after_shuffle;
                bool need_flip = false;
                for(auto& pcard : g_player[playerid].hand) {
                    if(pcard->code == 0)
                        need_flip = true;
                    uint32_t ac = reader.Read<uint32_t>();
                    if(ac == 0)
                        need_flip = true;
                    code_after_shuffle.push_back(ac);
                }
                auto cb_action1 = std::make_shared<ActionCallback<int64_t>>([playerid]() {
                    v3f npos;
                    if(g_player[playerid].hand.size() % 2)
                        npos = g_player[playerid].hand[g_player[playerid].hand.size() / 2]->GetPositionInfo().first;
                    else {
                        auto n1 = g_player[playerid].hand[g_player[playerid].hand.size() / 2 - 1]->GetPositionInfo().first;
                        auto n2 = g_player[playerid].hand[g_player[playerid].hand.size() / 2]->GetPositionInfo().first;
                        npos = (n1 + n2) * 0.5f;
                    }
                    for(auto& pcard : g_player[playerid].hand)
                        pcard->TranslateTo(100, npos, CardActType::Linear);
                });
                auto wait1 = std::make_shared<ActionWait<int64_t>>(200);
                auto cb_action2 = std::make_shared<ActionCallback<int64_t>>([playerid, code_after_shuffle]() {
                    for(size_t i = 0; i < g_player[playerid].hand.size(); ++i) {
                        g_player[playerid].hand[i]->SetCode(code_after_shuffle[i] & 0x7fffffff);
                        g_player[playerid].hand[i]->UpdateTranslation(100, CardActType::Linear);
                    }
                });
                auto wait2 = std::make_shared<ActionWait<int64_t>>(100);
                if(need_flip) {
                    for(auto& pcard : g_player[playerid].hand) {
                        auto rot = pcard->GetPositionInfo(CardPosParam::Shuffle).second;
                        pcard->RotateTo(100, rot);
                    }
                    auto wait_flip1 = std::make_shared<ActionWait<int64_t>>(150);
                    auto cb_flip= std::make_shared<ActionCallback<int64_t>>([playerid]() {
                        for(auto& pcard : g_player[playerid].hand) {
                            pcard->UpdateRotation(100);
                        }
                    });
                    auto wait_flip2 = std::make_shared<ActionWait<int64_t>>(100);
                    PushMessageActions(wait_flip1, cb_action1, wait1, cb_action2, wait2, cb_flip, wait_flip2);
                } else {
                    PushMessageActions(cb_action1, wait1, cb_action2, wait2);
                }
                break;
            }
            case MSG_REFRESH_DECK: {
                reader.Skip(1);
                break;
            }
            case MSG_SWAP_GRAVE_DECK: {
                int32_t playerid = LocalPlayer(reader.Read<uint8_t>());
                std::vector<std::shared_ptr<FieldCard>> tmp_grave;
                for(auto& iter : g_player[playerid].grave) {
                    auto data = iter->data;
                    if(data && (data->type & 0x802040)) {
                        iter->pos_info = {(int8_t)playerid, LOCATION_EXTRA, (int8_t)g_player[playerid].extra.size(), POS_FACEDOWN};
                        g_player[playerid].extra.push_back(iter);
                        iter->UpdateTo(200, iter->GetPositionInfo());
                    } else
                        tmp_grave.push_back(iter);
                }
                g_player[playerid].grave = std::move(tmp_grave);
                g_player[playerid].grave.swap(g_player[playerid].deck);
                for(size_t i = 0; i < g_player[playerid].grave.size(); ++i) {
                    auto& pcard = g_player[playerid].grave[i];
                    pcard->pos_info = {(int8_t)playerid, LOCATION_GRAVE, (int8_t)i, POS_FACEUP};
                    pcard->UpdateTo(200, pcard->GetPositionInfo());
                }
                if(g_player[playerid].grave.empty())
                    g_player[playerid].fixed_numbers[1]->SetValueStr("");
                else
                    g_player[playerid].fixed_numbers[1]->SetValue((int32_t)g_player[playerid].grave.size());
                for(size_t i = 0; i < g_player[playerid].deck.size(); ++i) {
                    auto& pcard = g_player[playerid].deck[i];
                    pcard->pos_info = {(int8_t)playerid, LOCATION_DECK, (int8_t)i, POS_FACEDOWN};
                    pcard->UpdateTo(200, pcard->GetPositionInfo());
                }
                if(g_player[playerid].deck.empty())
                    g_player[playerid].fixed_numbers[0]->SetValueStr("");
                else
                    g_player[playerid].fixed_numbers[0]->SetValue((int32_t)g_player[playerid].deck.size());
                std::string str = To<std::string>("%d(%d)", g_player[playerid].extra.size(), g_player[playerid].extra_faceup_count);
                g_player[playerid].fixed_numbers[3]->SetValueStr(str.c_str());
                PushMessageActions(std::make_shared<ActionWait<int64_t>>(200));
                break;
            }
            case MSG_SHUFFLE_SET_CARD: {
                int32_t playerid = LocalPlayer(reader.Read<uint8_t>());
                int32_t count = reader.Read<uint8_t>();
                std::list<std::shared_ptr<FieldCard>> mc;
                std::vector<uint8_t> preseq;
                std::vector<uint8_t> seq;
                for(int32_t i = 0; i < count; ++i) {
                    preseq.push_back(reader.Read<uint8_t>());
                    auto ptr = g_player[playerid].m_zone[preseq[i]];
                    mc.push_back(ptr);
                    g_player[playerid].m_zone[preseq[i]] = nullptr;
                    ptr->UpdateTo(100, ptr->GetPositionInfo(CardPosParam::Shuffle));
                }
                auto wait1 = std::make_shared<ActionWait<int64_t>>(300);
                for(int32_t i = 0; i < count; ++i)
                    seq.push_back(reader.Read<uint8_t>() & 0xf);
                auto cb = std::make_shared<ActionCallback<int64_t>>([this, playerid, mc, preseq, seq]() mutable {
                    auto iter = mc.begin();
                    int32_t count = (int32_t)preseq.size();
                    for(int32_t i = 0; i < count; ++i) {
                        if(seq[i] < 5) {
                            auto& ptr = *iter;
                            ptr->pos_info.sequence = seq[i];
                            g_player[playerid].m_zone[seq[i]] = ptr;
                            ptr->UpdateTo(100, ptr->GetPositionInfo());
                            for(auto att_card : ptr->attached_cards) {
                                att_card->pos_info.sequence = seq[i];
                                att_card->UpdateTo(100, att_card->GetPositionInfo());
                            }
                            mc.erase(iter++);
                        } else
                            iter++;
                    }
                    for(int32_t i = 0; i < count; ++i) {
                        if(g_player[playerid].m_zone[preseq[i]] == nullptr) {
                            auto& ptr = mc.front();
                            ptr->SetCode(0);
                            ptr->pos_info.sequence = preseq[i];
                            ptr->UpdateTo(100, ptr->GetPositionInfo());
                            g_player[playerid].m_zone[preseq[i]] = ptr;
                            mc.pop_front();
                        }
                    }
                    duel_scene->RedrawAllCards();
                });
                auto wait2 = std::make_shared<ActionWait<int64_t>>(100);
                PushMessageActions(wait1, cb, wait2);
                break;
            }
            case MSG_REVERSE_DECK: {
                int32_t top_code[2];
                top_code[0] = reader.Read<uint32_t>();
                top_code[1] = reader.Read<uint32_t>();
                g_duel.deck_reversed = !g_duel.deck_reversed;
                if(g_duel.deck_reversed) {
                    for(int32_t i = 0; i < 1; ++i) {
                        if(!g_player[LocalPlayer(i)].deck.empty()) {
                            auto pcard = g_player[LocalPlayer(i)].deck.back();
                            pcard->SetCode(top_code[i] & 0x7fffffff);
                            if(top_code[i] & 0x80000000)
                                pcard->pos_info.position = POS_FACEUP;
                        }
                    }
                }
                for(auto& pcard : g_player[0].deck)
                    pcard->RotateTo(100, pcard->GetPositionInfo().second);
                for(auto& pcard : g_player[1].deck)
                    pcard->RotateTo(100, pcard->GetPositionInfo().second);
                auto wait = std::make_shared<ActionWait<int64_t>>(100);
                PushMessageActions(wait);
                break;
            }
            case MSG_DECK_TOP: {
                int32_t playerid = LocalPlayer(reader.Read<uint8_t>());
                int32_t seq = reader.Read<uint8_t>();
                uint32_t code = reader.Read<uint32_t>();
                if(g_player[playerid].deck.size() > seq)
                    break;
                auto pcard = *(g_player[playerid].deck.rbegin() + seq);
                pcard->SetCode(code & 0x7fffffff);
                if(code & 0x80000000) {
                    pcard->pos_info.position = POS_FACEUP;
                    pcard->UpdateRotation(0);
                }
                break;
            }
            case MSG_NEW_TURN: {
//                int player = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                mainGame->dInfo.turn++;
//                if(!mainGame->dInfo.isTag && mainGame->dInfo.turn == 5 && !mainGame->dInfo.isReplay && mainGame->dInfo.player_type < 7) {
//                    mainGame->btnLeaveGame->setText(dataManager.GetSysString(1351));
//                    mainGame->btnLeaveGame->setVisible(true);
//                }
//                if(mainGame->dInfo.isTag && mainGame->dInfo.turn != 1) {
//                    if(player == 0)
//                        mainGame->dInfo.tag_player[0] = !mainGame->dInfo.tag_player[0];
//                    else
//                        mainGame->dInfo.tag_player[1] = !mainGame->dInfo.tag_player[1];
//                }
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping) {
//                    myswprintf(mainGame->dInfo.strTurn, L"Turn:%d", mainGame->dInfo.turn);
//                    mainGame->showcardcode = 10;
//                    mainGame->showcarddif = 30;
//                    mainGame->showcardp = 0;
//                    mainGame->showcard = 101;
//                    mainGame->WaitFrameSignal(40);
//                    mainGame->showcard = 0;
//                }
                break;
            }
            case MSG_NEW_PHASE: {
//                int phase = (unsigned char)BufferIO::ReadInt8(pbuf);
//                mainGame->btnDP->setVisible(false);
//                mainGame->btnSP->setVisible(false);
//                mainGame->btnM1->setVisible(false);
//                mainGame->btnBP->setVisible(false);
//                mainGame->btnM2->setVisible(false);
//                mainGame->btnEP->setVisible(false);
//                mainGame->btnShuffle->setVisible(false);
//                mainGame->showcarddif = 30;
//                mainGame->showcardp = 0;
//                switch (phase) {
//                    case PHASE_DRAW:
//                        mainGame->btnDP->setVisible(true);
//                        mainGame->showcardcode = 4;
//                        break;
//                    case PHASE_STANDBY:
//                        mainGame->btnSP->setVisible(true);
//                        mainGame->showcardcode = 5;
//                        break;
//                    case PHASE_MAIN1:
//                        mainGame->btnM1->setVisible(true);
//                        mainGame->showcardcode = 6;
//                        break;
//                    case PHASE_BATTLE:
//                        mainGame->btnBP->setVisible(true);
//                        mainGame->btnBP->setPressed(true);
//                        mainGame->btnBP->setEnabled(false);
//                        mainGame->showcardcode = 7;
//                        break;
//                    case PHASE_MAIN2:
//                        mainGame->btnM2->setVisible(true);
//                        mainGame->btnM2->setPressed(true);
//                        mainGame->btnM2->setEnabled(false);
//                        mainGame->showcardcode = 8;
//                        break;
//                    case PHASE_END:
//                        mainGame->btnEP->setVisible(true);
//                        mainGame->btnEP->setPressed(true);
//                        mainGame->btnEP->setEnabled(false);
//                        mainGame->showcardcode = 9;
//                        break;
//                }
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping) {
//                    mainGame->showcard = 101;
//                    mainGame->WaitFrameSignal(40);
//                    mainGame->showcard = 0;
//                }
                break;
            }
            case MSG_MOVE: {
                uint32_t code = reader.Read<uint32_t>();
                CardPosInfo pi_from(LocalPosInfo(reader.Read<int32_t>()));
                CardPosInfo pi_to(LocalPosInfo(reader.Read<int32_t>()));
                uint32_t reason = reader.Read<uint32_t>();
                if(pi_from.location == 0) {
                    auto new_card = AddCard(code, pi_to);
                    if(new_card) {
                        new_card->UpdatePosition(0);
                        new_card->reason = reason;
                        new_card->SetColor(0xffffff);
                        auto action = std::make_shared<LerpAnimator<int64_t, FieldCard>>(500, new_card, [](FieldCard* fc, double t) ->bool {
                            int32_t alpha = (int32_t)(255 * t) << 24;
                            fc->SetColor(0xffffff | alpha);
                            return true;
                        }, std::make_shared<TGenLinear<int64_t>>(500));
                        if(pi_to.location == LOCATION_HAND) {
                            for(auto& iter : g_player[pi_to.controler].hand)
                                iter->UpdatePosition(300, CardActType::Asymptotic);
                        }
                        PushMessageActions(action);
                    }
                    break;
                }
                auto ptr = GetCard(pi_from);
                auto move_inner = [this](std::shared_ptr<FieldCard> ptr, CardPosInfo from, CardPosInfo to) {
                    MoveCard(ptr, to);
                    if(from.location == LOCATION_HAND) {
                        for(auto& iter : g_player[from.controler].hand)
                            iter->UpdatePosition(300, CardActType::Asymptotic);
                    }
                    if(to.location == LOCATION_HAND) {
                        for(auto& iter : g_player[to.controler].hand)
                            iter->UpdatePosition(300, CardActType::Asymptotic);
                    } else
                        ptr->UpdatePosition(300, CardActType::Asymptotic);
                    PushMessageActions(std::make_shared<ActionWait<int64_t>>(300));
                };
                if(ptr != nullptr) {
                    if(code)
                        ptr->SetCode(code);
                    ptr->reason = reason;
                    if(pi_to.location == 0) {
                        auto rm_card = GetCard(pi_from);
                        if(rm_card) {
                            auto action = std::make_shared<LerpAnimator<int64_t, FieldCard>>(500, rm_card, [](FieldCard* fc, double t) ->bool {
                                int32_t alpha = (int32_t)(255 * (1 - t)) << 24;
                                fc->SetColor(0xffffff | alpha);
                                return true;
                            }, std::make_shared<TGenLinear<int64_t>>(500));
                            auto remove_action = std::make_shared<ActionCallback<int64_t>>([this, pi_from](){
                                auto rm_card = RemoveCard(pi_from);
                                if(rm_card) {
                                    if(pi_from.location == LOCATION_HAND) {
                                        for(auto& iter : g_player[pi_from.controler].hand)
                                            iter->UpdatePosition(300, CardActType::Asymptotic);
                                    }
                                    duel_scene->RemoveCard(rm_card);
                                    duel_scene->RedrawAllCards();
                                }
                            });
                            PushMessageActions(action, remove_action);
                        }
                    } else if(pi_from.location & 0x80) {
                        move_inner(ptr, pi_from, pi_to);
                    } else if(pi_to.location & 0x80) {
                        CardPosInfo att_pos(pi_to.controler, pi_to.location & 0x7f, pi_to.sequence, 0);
                        auto attach_card = GetCard(att_pos);
                        if(attach_card) {
                            if((pi_to.location & 0x7f) != LOCATION_EXTRA)
                                move_inner(ptr, pi_from, pi_to);
                            else {
                                bool move_hand = pi_from.location == LOCATION_HAND;
                                RemoveCard(pi_from);
                                ptr->Attach(attach_card);
                                if(move_hand) {
                                    for(auto& iter : g_player[pi_from.controler].hand)
                                        iter->UpdatePosition(300, CardActType::Asymptotic);
                                }
                            }
                        }
                    } else {
                        if(!ptr->attached_cards.empty() && pi_from.location == LOCATION_EXTRA) {
                            MoveCard(ptr, pi_to);
                            for(auto olcard : ptr->attached_cards)
                                olcard->UpdatePosition(300, CardActType::Asymptotic);
                            auto wait_action = std::make_shared<ActionWait<int64_t>>(300);
                            auto update_action = std::make_shared<ActionCallback<int64_t>>([ptr](){
                                ptr->UpdatePosition(300, CardActType::Asymptotic);
                            });
                            auto wait_action2 = std::make_shared<ActionWait<int64_t>>(300);
                            PushMessageActions(wait_action, update_action, wait_action2);
                        } else
                            move_inner(ptr, pi_from, pi_to);
                    }
                }
                break;
            }
            case MSG_POS_CHANGE: {
                uint32_t code = reader.Read<uint32_t>();
                CardPosInfo pi(LocalPosInfo(reader.Read<int32_t>()));
                uint32_t np = reader.Read<uint8_t>();
                auto ptr = GetCard(pi);
                if(ptr) {
                    if(code != 0)
                        ptr->SetCode(code);
                    if(ptr->pos_info.position != np) {
                        if((pi.position & POS_FACEUP) && (np & POS_FACEDOWN)) {
                            ptr->ClearCounter();
                            ptr->ClearContinuousTarget();
                        }
                        ptr->pos_info.position = np;
                        ptr->UpdateRotation(300);
                        PushMessageActions(std::make_shared<ActionWait<int64_t>>(300));
                    }
                }
                break;
            }
            case MSG_SET: {
                uint32_t code = reader.Read<uint32_t>();
                CardPosInfo pi(LocalPosInfo(reader.Read<int32_t>()));
                auto ptr = GetCard(pi);
                if(ptr && code)
                    ptr->SetCode(code);
                break;
            }
            case MSG_SWAP: {
//                /*int code1 = */BufferIO::ReadInt32(pbuf);
//                int c1 = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l1 = BufferIO::ReadInt8(pbuf);
//                int s1 = BufferIO::ReadInt8(pbuf);
//                /*int p1 = */BufferIO::ReadInt8(pbuf);
//                /*int code2 = */BufferIO::ReadInt32(pbuf);
//                int c2 = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l2 = BufferIO::ReadInt8(pbuf);
//                int s2 = BufferIO::ReadInt8(pbuf);
//                /*int p2 = */BufferIO::ReadInt8(pbuf);
//                myswprintf(event_string, dataManager.GetSysString(1602));
//                ClientCard* pc1 = mainGame->dField.GetCard(c1, l1, s1);
//                ClientCard* pc2 = mainGame->dField.GetCard(c2, l2, s2);
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping) {
//                    mainGame->gMutex.Lock();
//                    mainGame->dField.RemoveCard(c1, l1, s1);
//                    mainGame->dField.RemoveCard(c2, l2, s2);
//                    mainGame->dField.AddCard(pc1, c2, l2, s2);
//                    mainGame->dField.AddCard(pc2, c1, l1, s1);
//                    mainGame->dField.MoveCard(pc1, 10);
//                    mainGame->dField.MoveCard(pc2, 10);
//                    for (size_t i = 0; i < pc1->overlayed.size(); ++i)
//                        mainGame->dField.MoveCard(pc1->overlayed[i], 10);
//                    for (size_t i = 0; i < pc2->overlayed.size(); ++i)
//                        mainGame->dField.MoveCard(pc2->overlayed[i], 10);
//                    mainGame->gMutex.Unlock();
//                    mainGame->WaitFrameSignal(11);
//                } else {
//                    mainGame->dField.RemoveCard(c1, l1, s1);
//                    mainGame->dField.RemoveCard(c2, l2, s2);
//                    mainGame->dField.AddCard(pc1, c2, l2, s2);
//                    mainGame->dField.AddCard(pc2, c1, l1, s1);
//                }
                break;
            }
            case MSG_FIELD_DISABLED: {
//                int disabled = BufferIO::ReadInt32(pbuf);
//                if (!mainGame->dInfo.isFirst)
//                    disabled = (disabled >> 16) | (disabled << 16);
//                mainGame->dField.disabled_field = disabled;
                break;
            }
            case MSG_SUMMONING: {
//                unsigned int code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                /*int cc = */mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                /*int cl = */BufferIO::ReadInt8(pbuf);
//                /*int cs = */BufferIO::ReadInt8(pbuf);
//                /*int cp = */BufferIO::ReadInt8(pbuf);
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping) {
//                    myswprintf(event_string, dataManager.GetSysString(1603), dataManager.GetName(code));
//                    mainGame->showcardcode = code;
//                    mainGame->showcarddif = 0;
//                    mainGame->showcardp = 0;
//                    mainGame->showcard = 7;
//                    mainGame->WaitFrameSignal(30);
//                    mainGame->showcard = 0;
//                    mainGame->WaitFrameSignal(11);
//                }
                break;
            }
            case MSG_SUMMONED: {
                break;
            }
            case MSG_SPSUMMONING: {
//                unsigned int code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                /*int cc = */mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                /*int cl = */BufferIO::ReadInt8(pbuf);
//                /*int cs = */BufferIO::ReadInt8(pbuf);
//                /*int cp = */BufferIO::ReadInt8(pbuf);
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping) {
//                    myswprintf(event_string, dataManager.GetSysString(1605), dataManager.GetName(code));
//                    mainGame->showcardcode = code;
//                    mainGame->showcarddif = 1;
//                    mainGame->showcard = 5;
//                    mainGame->WaitFrameSignal(30);
//                    mainGame->showcard = 0;
//                    mainGame->WaitFrameSignal(11);
//                }
                break;
            }
            case MSG_SPSUMMONED: {
                break;
            }
            case MSG_FLIPSUMMONING: {
//                unsigned int code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                int cc = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int cl = BufferIO::ReadInt8(pbuf);
//                int cs = BufferIO::ReadInt8(pbuf);
//                int cp = BufferIO::ReadInt8(pbuf);
//                ClientCard* pcard = mainGame->dField.GetCard(cc, cl, cs);
//                pcard->SetCode(code);
//                pcard->position = cp;
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping) {
//                    myswprintf(event_string, dataManager.GetSysString(1607), dataManager.GetName(code));
//                    mainGame->dField.MoveCard(pcard, 10);
//                    mainGame->WaitFrameSignal(11);
//                    mainGame->showcardcode = code;
//                    mainGame->showcarddif = 0;
//                    mainGame->showcardp = 0;
//                    mainGame->showcard = 7;
//                    mainGame->WaitFrameSignal(30);
//                    mainGame->showcard = 0;
//                    mainGame->WaitFrameSignal(11);
//                }
                break;
            }
            case MSG_FLIPSUMMONED: {
                break;
            }
            case MSG_CHAINING: {
//                unsigned int code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                int pcc = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int pcl = BufferIO::ReadInt8(pbuf);
//                int pcs = BufferIO::ReadInt8(pbuf);
//                int subs = BufferIO::ReadInt8(pbuf);
//                int cc = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int cl = BufferIO::ReadInt8(pbuf);
//                int cs = BufferIO::ReadInt8(pbuf);
//                int desc = BufferIO::ReadInt32(pbuf);
//                /*int ct = */BufferIO::ReadInt8(pbuf);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                    return true;
//                ClientCard* pcard = mainGame->dField.GetCard(pcc, pcl, pcs, subs);
//                if(pcard->code != code) {
//                    pcard->code = code;
//                    mainGame->dField.MoveCard(pcard, 10);
//                }
//                mainGame->showcardcode = code;
//                mainGame->showcarddif = 0;
//                mainGame->showcard = 1;
//                pcard->is_highlighting = true;
//                mainGame->WaitFrameSignal(30);
//                pcard->is_highlighting = false;
//                mainGame->dField.current_chain.chain_card = pcard;
//                mainGame->dField.current_chain.code = code;
//                mainGame->dField.current_chain.desc = desc;
//                mainGame->dField.current_chain.controler = cc;
//                mainGame->dField.current_chain.location = cl;
//                mainGame->dField.current_chain.sequence = cs;
//                mainGame->dField.GetChainLocation(cc, cl, cs, &mainGame->dField.current_chain.chain_pos);
//                mainGame->dField.current_chain.solved = false;
//                int chc = 0;
//                for(size_t i = 0; i < mainGame->dField.chains.size(); ++i) {
//                    if (cl == 0x10 || cl == 0x20) {
//                        if (mainGame->dField.chains[i].controler == cc && mainGame->dField.chains[i].location == cl)
//                            chc++;
//                    } else {
//                        if (mainGame->dField.chains[i].controler == cc && mainGame->dField.chains[i].location == cl && mainGame->dField.chains[i].sequence == cs)
//                            chc++;
//                    }
//                }
//                if(cl == LOCATION_HAND)
//                    mainGame->dField.current_chain.chain_pos.X += 0.35f;
//                else
//                    mainGame->dField.current_chain.chain_pos.Y += chc * 0.25f;
                break;
            }
            case MSG_CHAINED: {
//                int ct = BufferIO::ReadInt8(pbuf);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                    return true;
//                myswprintf(event_string, dataManager.GetSysString(1609), dataManager.GetName(mainGame->dField.current_chain.code));
//                mainGame->gMutex.Lock();
//                mainGame->dField.chains.push_back(mainGame->dField.current_chain);
//                mainGame->gMutex.Unlock();
//                if (ct > 1)
//                    mainGame->WaitFrameSignal(20);
//                mainGame->dField.last_chain = true;
                break;
            }
            case MSG_CHAIN_SOLVING: {
//                int ct = BufferIO::ReadInt8(pbuf);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                    return true;
//                if (mainGame->dField.chains.size() > 1) {
//                    if (mainGame->dField.last_chain)
//                        mainGame->WaitFrameSignal(11);
//                    for(int i = 0; i < 5; ++i) {
//                        mainGame->dField.chains[ct - 1].solved = false;
//                        mainGame->WaitFrameSignal(3);
//                        mainGame->dField.chains[ct - 1].solved = true;
//                        mainGame->WaitFrameSignal(3);
//                    }
//                }
//                mainGame->dField.last_chain = false;
                break;
            }
            case MSG_CHAIN_SOLVED: {
//                /*int ct = */BufferIO::ReadInt8(pbuf);
                break;
            }
            case MSG_CHAIN_END: {
//                mainGame->dField.chains.clear();
                break;
            }
            case MSG_CHAIN_NEGATED:
            case MSG_CHAIN_DISABLED: {
//                int ct = BufferIO::ReadInt8(pbuf);
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping) {
//                    mainGame->showcardcode = mainGame->dField.chains[ct - 1].code;
//                    mainGame->showcarddif = 0;
//                    mainGame->showcard = 3;
//                    mainGame->WaitFrameSignal(30);
//                    mainGame->showcard = 0;
//                }
                break;
            }
            case MSG_CARD_SELECTED: {
                break;
            }
            case MSG_RANDOM_SELECTED: {
//                /*int player = */BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping) {
//                    pbuf += count * 4;
//                    return true;
//                }
//                ClientCard* pcards[10];
//                for (int i = 0; i < count; ++i) {
//                    int c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                    int l = BufferIO::ReadInt8(pbuf);
//                    int s = BufferIO::ReadInt8(pbuf);
//                    int ss = BufferIO::ReadInt8(pbuf);
//                    if ((l & 0x80) > 0)
//                        pcards[i] = mainGame->dField.GetCard(c, l & 0x7f, s)->overlayed[ss];
//                    else
//                        pcards[i] = mainGame->dField.GetCard(c, l, s);
//                    pcards[i]->is_highlighting = true;
//                }
//                mainGame->WaitFrameSignal(30);
//                for(int i = 0; i < count; ++i)
//                    pcards[i]->is_highlighting = false;
                break;
            }
            case MSG_BECOME_TARGET: {
                CardPosInfo pi(LocalPosInfo(reader.Read<int32_t>()));
                auto pcard = GetCard(pi);
                auto fadeact = std::make_shared<LerpAnimator<int64_t>>(900, [pcard](double t)->bool {
                    uint32_t color = 0x00ffffff | ((int32_t)(255 * (1 - t) + 5 * t) << 24);
                    pcard->SetColor(color);
                    return true;
                }, std::make_shared<TGenPeriodicRet<int64_t>>(300));
                auto cbact = std::make_shared<ActionCallback<int64_t>>([pcard]() {
                    pcard->SetColor(0xffffffff);
                });
                PushMessageActions(fadeact, cbact);
                break;
            }
            case MSG_DRAW: {
                uint32_t playerid = LocalPlayer(reader.Read<uint8_t>());
                uint32_t count = reader.Read<uint8_t>();
                std::vector<std::shared_ptr<Action<int64_t>>> acts;
                for(uint32_t i = 0; i < count; ++i) {
                    uint32_t data = reader.Read<uint32_t>();
                    acts.push_back(std::make_shared<ActionCallback<int64_t>>([playerid, count, data, this]() {
                        if(g_player[playerid].deck.empty())
                            return;
                        auto ptr = g_player[playerid].deck.back();
                        MoveCard(ptr, CardPosInfo(playerid, LOCATION_HAND, 0, 0));
                        for(auto& iter : g_player[playerid].hand)
                            iter->UpdatePosition(500);
                    }));
                    acts.push_back(std::make_shared<ActionWait<int64>>(300));
                }
                PushMessageActions(acts);
                break;
            }
            case MSG_DAMAGE:
            case MSG_PAY_LPCOST: {
                uint32_t playerid = LocalPlayer(reader.Read<uint8_t>());
                int32_t val = reader.Read<int32_t>();
                int32_t beginlp = g_player[playerid].lp;
                int32_t endlp = (beginlp > val) ? (beginlp - val) : 0;
                auto changesp = duel_scene->AddFloatingNumber();
                jaweson::JsonNode<>& lp_node = layoutCfg[playerid == 0 ? "lpchange1" : "lpchange2"];
                v2i pos = {(int32_t)lp_node[0].to_integer(), (int32_t)lp_node[2].to_integer()};
                v2f prop = {(float)lp_node[1].to_double(), (float)lp_node[3].to_double()};
                v2i csize = {(int32_t)lp_node[4].to_integer(), (int32_t)lp_node[5].to_integer()};
                auto move_inf = g_player[playerid].fixed_numbers[(int32_t)FloatingNumberType::LP]->GetCenter();
                auto char_sz = g_player[playerid].fixed_numbers[(int32_t)FloatingNumberType::LP]->GetCharSize();
                changesp->SetCenter(pos, prop);
                changesp->SetCharSize(csize);
                changesp->SetRotation((float)lp_node[6].to_double());
                changesp->SetValue(-val);
                changesp->SetColor((msg_type == MSG_DAMAGE) ? 0xff0000ff : 0xffff0000);
                changesp->SetSColor(0xff000000);
                auto waitact = std::make_shared<ActionWait<int64_t>>(300);
                auto moveact = std::make_shared<LerpAnimator<int64_t, FloatingNumber>>(200, changesp, [=](FloatingNumber* obj, double t)->bool {
                    v2i cpos = base::interpolate(pos, move_inf.first, float(t));
                    v2f cprop = base::interpolate(prop, move_inf.second, float(t));
                    obj->SetCenter(cpos, cprop);
                    obj->SetCharSize(base::interpolate(csize, char_sz, float(t)));
                    uint32_t ahpha = ((uint32_t)(255 * (1 - t))) << 24;
                    obj->SetColor(((msg_type == MSG_DAMAGE) ? 0x000000ff : 0x00ff0000) | ahpha);
                    obj->SetSColor(0x00000000 | ahpha);
                    SetLP(playerid, (int32_t)(beginlp * (1 - t) + endlp * t));
                    return true;
                }, std::make_shared<TGenLinear<int64_t>>(200));
                auto cbact = std::make_shared<ActionCallback<int64_t>>([=]() {
                    SetLP(playerid, endlp);
                });
                PushMessageActions(waitact, moveact, cbact);
                break;
            }
            case MSG_RECOVER: {
                uint32_t playerid = LocalPlayer(reader.Read<uint8_t>());
                int32_t val = reader.Read<int32_t>();
                int32_t beginlp = g_player[playerid].lp;
                int32_t endlp = beginlp + val;
                auto changesp = duel_scene->AddFloatingNumber();
                jaweson::JsonNode<>& lp_node = layoutCfg[playerid == 0 ? "lpchange1" : "lpchange2"];
                v2i pos = {(int32_t)lp_node[0].to_integer(), (int32_t)lp_node[2].to_integer()};
                v2f prop = {(float)lp_node[1].to_double(), (float)lp_node[3].to_double()};
                v2i csize = {(int32_t)lp_node[4].to_integer(), (int32_t)lp_node[5].to_integer()};
                auto move_inf = g_player[playerid].fixed_numbers[(int32_t)FloatingNumberType::LP]->GetCenter();
                auto char_sz = g_player[playerid].fixed_numbers[(int32_t)FloatingNumberType::LP]->GetCharSize();
                changesp->SetCenter(pos, prop);
                changesp->SetCharSize(csize);
                changesp->SetRotation((float)lp_node[6].to_double());
                changesp->SetValueStr(To<std::string>("+%d", val).c_str());
                changesp->SetColor(0xff00ff00);
                changesp->SetSColor(0xff000000);
                auto waitact = std::make_shared<ActionWait<int64_t>>(300);
                auto moveact = std::make_shared<LerpAnimator<int64_t, FloatingNumber>>(200, changesp, [=](FloatingNumber* obj, double t)->bool {
                    v2i cpos = base::interpolate(pos, move_inf.first, float(t));
                    v2f cprop = base::interpolate(prop, move_inf.second, float(t));
                    obj->SetCenter(cpos, cprop);
                    obj->SetCharSize(base::interpolate(csize, char_sz, float(t)));
                    uint32_t ahpha = ((uint32_t)(255 * (1 - t))) << 24;
                    obj->SetColor(0x0000ff00 | ahpha);
                    obj->SetSColor(0x00000000 | ahpha);
                    SetLP(playerid, (int32_t)(beginlp * (1 - t) + endlp * t));
                    return true;
                }, std::make_shared<TGenLinear<int64_t>>(200));
                auto cbact = std::make_shared<ActionCallback<int64_t>>([=]() {
                    SetLP(playerid, endlp);
                });
                PushMessageActions(waitact, moveact, cbact);
                break;
            }
            case MSG_EQUIP: {
//                int c1 = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l1 = BufferIO::ReadInt8(pbuf);
//                int s1 = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                int c2 = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l2 = BufferIO::ReadInt8(pbuf);
//                int s2 = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                ClientCard* pc1 = mainGame->dField.GetCard(c1, l1, s1);
//                ClientCard* pc2 = mainGame->dField.GetCard(c2, l2, s2);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping) {
//                    pc1->equipTarget = pc2;
//                    pc2->equipped.insert(pc1);
//                } else {
//                    mainGame->gMutex.Lock();
//                    pc1->equipTarget = pc2;
//                    pc2->equipped.insert(pc1);
//                    if (mainGame->dField.hovered_card == pc1)
//                        pc2->is_showequip = true;
//                    else if (mainGame->dField.hovered_card == pc2)
//                        pc1->is_showequip = true;
//                    mainGame->gMutex.Unlock();
//                }
                break;
            }
            case MSG_LPUPDATE: {
                uint32_t playerid = LocalPlayer(reader.Read<uint8_t>());
                int32_t beginlp = g_player[playerid].lp;
                int32_t endlp = reader.Read<int32_t>();
                auto setact = std::make_shared<LerpAnimator<int64_t>>(200, [=](double t)->bool {
                    SetLP(playerid, (int32_t)(beginlp * (1 - t) + endlp * t));
                    return true;
                }, std::make_shared<TGenLinear<int64_t>>(200));
                auto cbact = std::make_shared<ActionCallback<int64_t>>([=]() {
                    SetLP(playerid, endlp);
                });
                PushMessageActions(setact, cbact);
                break;
            }
            case MSG_UNEQUIP: {
//                int c1 = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l1 = BufferIO::ReadInt8(pbuf);
//                int s1 = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                ClientCard* pc = mainGame->dField.GetCard(c1, l1, s1);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping) {
//                    pc->equipTarget->equipped.erase(pc);
//                    pc->equipTarget = 0;
//                } else {
//                    mainGame->gMutex.Lock();
//                    if (mainGame->dField.hovered_card == pc)
//                        pc->equipTarget->is_showequip = false;
//                    else if (mainGame->dField.hovered_card == pc->equipTarget)
//                        pc->is_showequip = false;
//                    pc->equipTarget->equipped.erase(pc);
//                    pc->equipTarget = 0;
//                    mainGame->gMutex.Unlock();
//                }
                break;
            }
            case MSG_CARD_TARGET: {
//                int c1 = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l1 = BufferIO::ReadInt8(pbuf);
//                int s1 = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                int c2 = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l2 = BufferIO::ReadInt8(pbuf);
//                int s2 = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                ClientCard* pc1 = mainGame->dField.GetCard(c1, l1, s1);
//                ClientCard* pc2 = mainGame->dField.GetCard(c2, l2, s2);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping) {
//                    pc1->cardTarget.insert(pc2);
//                    pc2->ownerTarget.insert(pc1);
//                } else {
//                    mainGame->gMutex.Lock();
//                    pc1->cardTarget.insert(pc2);
//                    pc2->ownerTarget.insert(pc1);
//                    if (mainGame->dField.hovered_card == pc1)
//                        pc2->is_showtarget = true;
//                    else if (mainGame->dField.hovered_card == pc2)
//                        pc1->is_showtarget = true;
//                    mainGame->gMutex.Unlock();
//                }
                break;
            }
            case MSG_CANCEL_TARGET: {
//                int c1 = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l1 = BufferIO::ReadInt8(pbuf);
//                int s1 = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                int c2 = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l2 = BufferIO::ReadInt8(pbuf);
//                int s2 = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                ClientCard* pc1 = mainGame->dField.GetCard(c1, l1, s1);
//                ClientCard* pc2 = mainGame->dField.GetCard(c2, l2, s2);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping) {
//                    pc1->cardTarget.erase(pc2);
//                    pc2->ownerTarget.erase(pc1);
//                } else {
//                    mainGame->gMutex.Lock();
//                    pc1->cardTarget.erase(pc2);
//                    pc2->ownerTarget.erase(pc1);
//                    if (mainGame->dField.hovered_card == pc1)
//                        pc2->is_showtarget = false;
//                    else if (mainGame->dField.hovered_card == pc2)
//                        pc1->is_showtarget = false;
//                    mainGame->gMutex.Unlock();
//                }
                break;
            }
            case MSG_ADD_COUNTER: {
//                int type = BufferIO::ReadInt16(pbuf);
//                int c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l = BufferIO::ReadInt8(pbuf);
//                int s = BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                ClientCard* pc = mainGame->dField.GetCard(c, l, s);
//                if (pc->counters.count(type))
//                    pc->counters[type] += count;
//                else pc->counters[type] = count;
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                    return true;
//                myswprintf(textBuffer, dataManager.GetSysString(1617), dataManager.GetName(pc->code), count, dataManager.GetCounterName(type));
//                pc->is_highlighting = true;
//                mainGame->gMutex.Lock();
//                mainGame->stACMessage->setText(textBuffer);
//                mainGame->PopupElement(mainGame->wACMessage, 20);
//                mainGame->gMutex.Unlock();
//                mainGame->WaitFrameSignal(40);
//                pc->is_highlighting = false;
                break;
            }
            case MSG_REMOVE_COUNTER: {
//                int type = BufferIO::ReadInt16(pbuf);
//                int c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l = BufferIO::ReadInt8(pbuf);
//                int s = BufferIO::ReadInt8(pbuf);
//                int count = BufferIO::ReadInt8(pbuf);
//                ClientCard* pc = mainGame->dField.GetCard(c, l, s);
//                pc->counters[type] -= count;
//                if (pc->counters[type] <= 0)
//                    pc->counters.erase(type);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                    return true;
//                myswprintf(textBuffer, dataManager.GetSysString(1618), dataManager.GetName(pc->code), count, dataManager.GetCounterName(type));
//                pc->is_highlighting = true;
//                mainGame->gMutex.Lock();
//                mainGame->stACMessage->setText(textBuffer);
//                mainGame->PopupElement(mainGame->wACMessage, 20);
//                mainGame->gMutex.Unlock();
//                mainGame->WaitFrameSignal(40);
//                pc->is_highlighting = false;
                break;
            }
            case MSG_ATTACK: {
//                int ca = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int la = BufferIO::ReadInt8(pbuf);
//                int sa = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                mainGame->dField.attacker = mainGame->dField.GetCard(ca, la, sa);
//                int cd = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int ld = BufferIO::ReadInt8(pbuf);
//                int sd = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                    return true;
//                float sy;
//                if (ld != 0) {
//                    mainGame->dField.attack_target = mainGame->dField.GetCard(cd, ld, sd);
//                    myswprintf(event_string, dataManager.GetSysString(1619), dataManager.GetName(mainGame->dField.attacker->code),
//                               dataManager.GetName(mainGame->dField.attack_target->code));
//                    float xa = mainGame->dField.attacker->curPos.X;
//                    float ya = mainGame->dField.attacker->curPos.Y;
//                    float xd = mainGame->dField.attack_target->curPos.X;
//                    float yd = mainGame->dField.attack_target->curPos.Y;
//                    sy = (float)sqrt((xa - xd) * (xa - xd) + (ya - yd) * (ya - yd)) / 2;
//                    mainGame->atk_t = vector3df((xa + xd) / 2, (ya + yd) / 2, 0);
//                    if (ca == 0)
//                        mainGame->atk_r = vector3df(0, 0, -atan((xd - xa) / (yd - ya)));
//                    else
//                        mainGame->atk_r = vector3df(0, 0, 3.1415926 - atan((xd - xa) / (yd - ya)));
//                } else {
//                    myswprintf(event_string, dataManager.GetSysString(1620), dataManager.GetName(mainGame->dField.attacker->code));
//                    float xa = mainGame->dField.attacker->curPos.X;
//                    float ya = mainGame->dField.attacker->curPos.Y;
//                    float xd = 3.95f;
//                    float yd = 3.5f;
//                    if (ca == 0)
//                        yd = -3.5f;
//                    sy = (float)sqrt((xa - xd) * (xa - xd) + (ya - yd) * (ya - yd)) / 2;
//                    mainGame->atk_t = vector3df((xa + xd) / 2, (ya + yd) / 2, 0);
//                    if (ca == 0)
//                        mainGame->atk_r = vector3df(0, 0, -atan((xd - xa) / (yd - ya)));
//                    else
//                        mainGame->atk_r = vector3df(0, 0, 3.1415926 - atan((xd - xa) / (yd - ya)));
//                }
//                matManager.GenArrow(sy);
//                mainGame->attack_sv = 0;
//                mainGame->is_attacking = true;
//                mainGame->WaitFrameSignal(40);
//                mainGame->is_attacking = false;
                break;
            }
            case MSG_BATTLE: {
//                int ca = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int la = BufferIO::ReadInt8(pbuf);
//                int sa = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                int aatk = BufferIO::ReadInt32(pbuf);
//                int adef = BufferIO::ReadInt32(pbuf);
//                /*int da = */BufferIO::ReadInt8(pbuf);
//                int cd = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int ld = BufferIO::ReadInt8(pbuf);
//                int sd = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                int datk = BufferIO::ReadInt32(pbuf);
//                int ddef = BufferIO::ReadInt32(pbuf);
//                /*int dd = */BufferIO::ReadInt8(pbuf);
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                    return true;
//                mainGame->gMutex.Lock();
//                ClientCard* pcard = mainGame->dField.GetCard(ca, la, sa);
//                if(aatk != pcard->attack) {
//                    pcard->attack = aatk;
//                    myswprintf(pcard->atkstring, L"%d", aatk);
//                }
//                if(adef != pcard->defence) {
//                    pcard->defence = adef;
//                    myswprintf(pcard->defstring, L"%d", adef);
//                }
//                if(ld) {
//                    pcard = mainGame->dField.GetCard(cd, ld, sd);
//                    if(datk != pcard->attack) {
//                        pcard->attack = datk;
//                        myswprintf(pcard->atkstring, L"%d", datk);
//                    }
//                    if(ddef != pcard->defence) {
//                        pcard->defence = ddef;
//                        myswprintf(pcard->defstring, L"%d", ddef);
//                    }
//                }
//                mainGame->gMutex.Unlock();
                break;
            }
            case MSG_ATTACK_NEGATED: {
//                myswprintf(event_string, dataManager.GetSysString(1621), dataManager.GetName(mainGame->dField.attacker->code));
                break;
            }
            case MSG_DAMAGE_STEP_START: {
                break;
            }
            case MSG_DAMAGE_STEP_END: {
                break;
            }
            case MSG_MISSED_EFFECT: {
//                BufferIO::ReadInt32(pbuf);
//                unsigned int code = (unsigned int)BufferIO::ReadInt32(pbuf);
//                myswprintf(textBuffer, dataManager.GetSysString(1622), dataManager.GetName(code));
//                mainGame->lstLog->addItem(textBuffer);
//                mainGame->logParam.push_back(code);
                break;
            }
            case MSG_BE_CHAIN_TARGET:
                break;
            case MSG_CREATE_RELATION:
                break;
            case MSG_RELEASE_RELATION:
                break;
            case MSG_TOSS_COIN: {
//                /*int player = */mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int count = BufferIO::ReadInt8(pbuf);
//                wchar_t* pwbuf = textBuffer;
//                BufferIO::CopyWStrRef(dataManager.GetSysString(1623), pwbuf, 256);
//                for (int i = 0; i < count; ++i) {
//                    int res = BufferIO::ReadInt8(pbuf);
//                    *pwbuf++ = L'[';
//                    BufferIO::CopyWStrRef(dataManager.GetSysString(res ? 60 : 61), pwbuf, 256);
//                    *pwbuf++ = L']';
//                }
//                *pwbuf = 0;
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                    return true;
//                mainGame->gMutex.Lock();
//                mainGame->lstLog->addItem(textBuffer);
//                mainGame->logParam.push_back(0);
//                mainGame->stACMessage->setText(textBuffer);
//                mainGame->PopupElement(mainGame->wACMessage, 20);
//                mainGame->gMutex.Unlock();
//                mainGame->WaitFrameSignal(40);
                break;
            }
            case MSG_TOSS_DICE: {
//                /*int player = */mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int count = BufferIO::ReadInt8(pbuf);
//                wchar_t* pwbuf = textBuffer;
//                BufferIO::CopyWStrRef(dataManager.GetSysString(1624), pwbuf, 256);
//                for (int i = 0; i < count; ++i) {
//                    int res = BufferIO::ReadInt8(pbuf);
//                    *pwbuf++ = L'[';
//                    *pwbuf++ = L'0' + res;
//                    *pwbuf++ = L']';
//                }
//                *pwbuf = 0;
//                if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                    return true;
//                mainGame->gMutex.Lock();
//                mainGame->lstLog->addItem(textBuffer);
//                mainGame->logParam.push_back(0);
//                mainGame->stACMessage->setText(textBuffer);
//                mainGame->PopupElement(mainGame->wACMessage, 20);
//                mainGame->gMutex.Unlock();
//                mainGame->WaitFrameSignal(40);
                break;
            }
            case MSG_DECLEAR_RACE: {
//                /*int player = */mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                mainGame->dField.announce_count = BufferIO::ReadInt8(pbuf);
//                int available = BufferIO::ReadInt32(pbuf);
//                for(int i = 0, filter = 0x1; i < 24; ++i, filter <<= 1) {
//                    mainGame->chkRace[i]->setChecked(false);
//                    if(filter & available)
//                        mainGame->chkRace[i]->setVisible(true);
//                    else mainGame->chkRace[i]->setVisible(false);
//                }
//                if(select_hint)
//                    myswprintf(textBuffer, L"%ls", dataManager.GetDesc(select_hint));
//                else myswprintf(textBuffer, dataManager.GetSysString(563));
//                select_hint = 0;
//                mainGame->gMutex.Lock();
//                mainGame->wANRace->setText(textBuffer);
//                mainGame->PopupElement(mainGame->wANRace);
//                mainGame->gMutex.Unlock();
                break;
            }
            case MSG_DECLEAR_ATTRIB: {
//                /*int player = */mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                mainGame->dField.announce_count = BufferIO::ReadInt8(pbuf);
//                int available = BufferIO::ReadInt32(pbuf);
//                for(int i = 0, filter = 0x1; i < 7; ++i, filter <<= 1) {
//                    mainGame->chkAttribute[i]->setChecked(false);
//                    if(filter & available)
//                        mainGame->chkAttribute[i]->setVisible(true);
//                    else mainGame->chkAttribute[i]->setVisible(false);
//                }
//                if(select_hint)
//                    myswprintf(textBuffer, L"%ls", dataManager.GetDesc(select_hint));
//                else myswprintf(textBuffer, dataManager.GetSysString(562));
//                select_hint = 0;
//                mainGame->gMutex.Lock();
//                mainGame->wANAttribute->setText(textBuffer);
//                mainGame->PopupElement(mainGame->wANAttribute);
//                mainGame->gMutex.Unlock();
                break;
            }
            case MSG_DECLEAR_CARD: {
//                /*int player = */mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                if(select_hint)
//                    myswprintf(textBuffer, L"%ls", dataManager.GetDesc(select_hint));
//                else myswprintf(textBuffer, dataManager.GetSysString(564));
//                select_hint = 0;
//                mainGame->gMutex.Lock();
//                mainGame->ebANCard->setText(L"");
//                mainGame->wANCard->setText(textBuffer);
//                mainGame->PopupElement(mainGame->wANCard);
//                mainGame->gMutex.Unlock();
                break;
            }
            case MSG_DECLEAR_NUMBER: {
//                /*int player = */mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int count = BufferIO::ReadInt8(pbuf);
//                mainGame->gMutex.Lock();
//                mainGame->cbANNumber->clear();
//                for (int i = 0; i < count; ++i) {
//                    int value = BufferIO::ReadInt32(pbuf);
//                    myswprintf(textBuffer, L" % d", value);
//                    mainGame->cbANNumber->addItem(textBuffer, value);
//                }
//                mainGame->cbANNumber->setSelected(0);
//                if(select_hint)
//                    myswprintf(textBuffer, L"%ls", dataManager.GetDesc(select_hint));
//                else myswprintf(textBuffer, dataManager.GetSysString(565));
//                select_hint = 0;
//                mainGame->wANNumber->setText(textBuffer);
//                mainGame->PopupElement(mainGame->wANNumber);
//                mainGame->gMutex.Unlock();
                break;
            }
            case MSG_CARD_HINT: {
//                int c = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                int l = BufferIO::ReadInt8(pbuf);
//                int s = BufferIO::ReadInt8(pbuf);
//                BufferIO::ReadInt8(pbuf);
//                int chtype = BufferIO::ReadInt8(pbuf);
//                int value = BufferIO::ReadInt32(pbuf);
//                ClientCard* pcard = mainGame->dField.GetCard(c, l, s);
//                if(!pcard)
//                    return true;
//                if(chtype == CHINT_DESC_ADD) {
//                    pcard->desc_hints[value]++;
//                } else if(chtype == CHINT_DESC_REMOVE) {
//                    pcard->desc_hints[value]--;
//                    if(pcard->desc_hints[value] == 0)
//                        pcard->desc_hints.erase(value);
//                } else {
//                    pcard->cHint = chtype;
//                    pcard->chValue = value;
//                    if(chtype == CHINT_TURN) {
//                        if(value == 0)
//                            return true;
//                        if(mainGame->dInfo.isReplay && mainGame->dInfo.isReplaySkiping)
//                            return true;
//                        if(pcard->location & LOCATION_ONFIELD)
//                            pcard->is_highlighting = true;
//                        mainGame->showcardcode = pcard->code;
//                        mainGame->showcarddif = 0;
//                        mainGame->showcardp = value - 1;
//                        mainGame->showcard = 6;
//                        mainGame->WaitFrameSignal(30);
//                        pcard->is_highlighting = false;
//                        mainGame->showcard = 0;
//                    }
//                }
                break;
            }
            case MSG_TAG_SWAP: {
//                int player = mainGame->LocalPlayer(BufferIO::ReadInt8(pbuf));
//                size_t mcount = (size_t)BufferIO::ReadInt8(pbuf);
//                size_t ecount = (size_t)BufferIO::ReadInt8(pbuf);
//                size_t pcount = (size_t)BufferIO::ReadInt8(pbuf);
//                size_t hcount = (size_t)BufferIO::ReadInt8(pbuf);
//                int topcode = BufferIO::ReadInt32(pbuf);
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping) {
//                    for (auto cit = mainGame->dField.g_player[player].deck.begin(); cit != mainGame->dField.g_player[player].deck.end(); ++cit) {
//                        if(player == 0) (*cit)->dPos.Y = 0.4f;
//                        else (*cit)->dPos.Y = -0.6f;
//                        (*cit)->dRot = irr::core::vector3df(0, 0, 0);
//                        (*cit)->is_moving = true;
//                        (*cit)->aniFrame = 5;
//                    }
//                    for (auto cit = mainGame->dField.g_player[player].hand.begin(); cit != mainGame->dField.g_player[player].hand.end(); ++cit) {
//                        if(player == 0) (*cit)->dPos.Y = 0.4f;
//                        else (*cit)->dPos.Y = -0.6f;
//                        (*cit)->dRot = irr::core::vector3df(0, 0, 0);
//                        (*cit)->is_moving = true;
//                        (*cit)->aniFrame = 5;
//                    }
//                    for (auto cit = mainGame->dField.g_player[player].extra.begin(); cit != mainGame->dField.g_player[player].extra.end(); ++cit) {
//                        if(player == 0) (*cit)->dPos.Y = 0.4f;
//                        else (*cit)->dPos.Y = -0.6f;
//                        (*cit)->dRot = irr::core::vector3df(0, 0, 0);
//                        (*cit)->is_moving = true;
//                        (*cit)->aniFrame = 5;
//                    }
//                    mainGame->WaitFrameSignal(5);
//                }
//                //
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping)
//                    mainGame->gMutex.Lock();
//                if(mainGame->dField.g_player[player].deck.size() > mcount) {
//                    while(mainGame->dField.g_player[player].deck.size() > mcount) {
//                        ClientCard* ccard = *mainGame->dField.g_player[player].deck.rbegin();
//                        mainGame->dField.g_player[player].deck.pop_back();
//                        delete ccard;
//                    }
//                } else {
//                    while(mainGame->dField.g_player[player].deck.size() < mcount) {
//                        ClientCard* ccard = new ClientCard();
//                        ccard->controler = player;
//                        ccard->location = LOCATION_DECK;
//                        ccard->sequence = mainGame->dField.g_player[player].deck.size();
//                        mainGame->dField.g_player[player].deck.push_back(ccard);
//                    }
//                }
//                if(mainGame->dField.g_player[player].hand.size() > hcount) {
//                    while(mainGame->dField.g_player[player].hand.size() > hcount) {
//                        ClientCard* ccard = *mainGame->dField.g_player[player].hand.rbegin();
//                        mainGame->dField.g_player[player].hand.pop_back();
//                        delete ccard;
//                    }
//                } else {
//                    while(mainGame->dField.g_player[player].hand.size() < hcount) {
//                        ClientCard* ccard = new ClientCard();
//                        ccard->controler = player;
//                        ccard->location = LOCATION_HAND;
//                        ccard->sequence = mainGame->dField.g_player[player].hand.size();
//                        mainGame->dField.g_player[player].hand.push_back(ccard);
//                    }
//                }
//                if(mainGame->dField.g_player[player].extra.size() > ecount) {
//                    while(mainGame->dField.g_player[player].extra.size() > ecount) {
//                        ClientCard* ccard = *mainGame->dField.g_player[player].extra.rbegin();
//                        mainGame->dField.g_player[player].extra.pop_back();
//                        delete ccard;
//                    }
//                } else {
//                    while(mainGame->dField.g_player[player].extra.size() < ecount) {
//                        ClientCard* ccard = new ClientCard();
//                        ccard->controler = player;
//                        ccard->location = LOCATION_EXTRA;
//                        ccard->sequence = mainGame->dField.g_player[player].extra.size();
//                        mainGame->dField.g_player[player].extra.push_back(ccard);
//                    }
//                }
//                mainGame->dField.extra_p_count[player] = pcount;
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping)
//                    mainGame->gMutex.Unlock();
//                //
//                if(!mainGame->dInfo.isReplay || !mainGame->dInfo.isReplaySkiping) {
//                    for (auto cit = mainGame->dField.g_player[player].deck.begin(); cit != mainGame->dField.g_player[player].deck.end(); ++cit) {
//                        ClientCard* pcard = *cit;
//                        mainGame->dField.GetCardLocation(pcard, &pcard->curPos, &pcard->curRot);
//                        if(player == 0) pcard->curPos.Y += 2.0f;
//                        else pcard->curPos.Y -= 3.0f;
//                        mainGame->dField.MoveCard(*cit, 5);
//                    }
//                    if(mainGame->dField.g_player[player].deck.size())
//                        (*mainGame->dField.g_player[player].deck.rbegin())->code = topcode;
//                    for (auto cit = mainGame->dField.g_player[player].hand.begin(); cit != mainGame->dField.g_player[player].hand.end(); ++cit) {
//                        ClientCard* pcard = *cit;
//                        pcard->code = BufferIO::ReadInt32(pbuf);
//                        mainGame->dField.GetCardLocation(pcard, &pcard->curPos, &pcard->curRot);
//                        if(player == 0) pcard->curPos.Y += 2.0f;
//                        else pcard->curPos.Y -= 3.0f;
//                        mainGame->dField.MoveCard(*cit, 5);
//                    }
//                    for (auto cit = mainGame->dField.g_player[player].extra.begin(); cit != mainGame->dField.g_player[player].extra.end(); ++cit) {
//                        ClientCard* pcard = *cit;
//                        pcard->code = BufferIO::ReadInt32(pbuf) & 0x7fffffff;
//                        mainGame->dField.GetCardLocation(pcard, &pcard->curPos, &pcard->curRot);
//                        if(player == 0) pcard->curPos.Y += 2.0f;
//                        else pcard->curPos.Y -= 3.0f;
//                        mainGame->dField.MoveCard(*cit, 5);
//                    }
//                    mainGame->WaitFrameSignal(5);
//                }
                break;
            }
            case MSG_RELOAD_FIELD: {
                for(int32_t p = 0; p < 2; ++p) {
                    SetLP(p, reader.Read<int32_t>());
                    for(int32_t i = 0; i < 5; ++i) {
                        uint32_t exist_card = reader.Read<uint8_t>();
                        if(exist_card) {
                            uint32_t pos = reader.Read<uint8_t>();
                            uint32_t sz = reader.Read<uint8_t>();
                            AddCard(0, CardPosInfo(p, LOCATION_MZONE, i, pos));
                            for(int32_t ov = 0; ov < sz; ++ov)
                                AddCard(0, CardPosInfo(p, LOCATION_MZONE | LOCATION_OVERLAY, i, ov));
                        }
                    }
                    for(int32_t i = 0; i < 8; ++i) {
                        uint32_t exist_card = reader.Read<uint8_t>();
                        if(exist_card) {
                            uint32_t pos = reader.Read<uint8_t>();
                            AddCard(0, CardPosInfo(p, LOCATION_SZONE, i, pos));
                        }
                    }
                    int32_t main_sz = reader.Read<uint8_t>();
                    for(int32_t i = 0; i < main_sz; ++i)
                        AddCard(0, CardPosInfo(p, LOCATION_DECK, i, POS_FACEDOWN));
                    int32_t hand_sz = reader.Read<uint8_t>();
                    for(int32_t i = 0; i < hand_sz; ++i)
                        AddCard(0, CardPosInfo(p, LOCATION_HAND, i, POS_FACEDOWN));
                    int32_t grave_sz = reader.Read<uint8_t>();
                    for(int32_t i = 0; i < grave_sz; ++i)
                        AddCard(0, CardPosInfo(p, LOCATION_GRAVE, i, POS_FACEUP));
                    int32_t remove_sz = reader.Read<uint8_t>();
                    for(int32_t i = 0; i < remove_sz; ++i)
                        AddCard(0, CardPosInfo(p, LOCATION_REMOVED, i, POS_FACEUP));
                    int32_t extra_sz = reader.Read<uint8_t>();
                    for(int32_t i = 0; i < extra_sz; ++i)
                        AddCard(0, CardPosInfo(p, LOCATION_EXTRA, i, POS_FACEDOWN));
                }
                int32_t chain_sz = reader.Read<uint8_t>();
                for(int32_t i = 0; i < chain_sz; ++i) {
                    reader.Skip(15);
    //                    cinfos[i].code = reader.Read<uint32_t>();
    //                    cinfos[i].card_con = reader.Read<uint8_t>();
    //                    cinfos[i].card_loc = reader.Read<uint8_t>();
    //                    cinfos[i].card_seq = reader.Read<uint8_t>();
    //                    cinfos[i].card_pos = reader.Read<uint8_t>();
    //                    cinfos[i].trig_con = reader.Read<uint8_t>();
    //                    cinfos[i].trig_loc = reader.Read<uint8_t>();
    //                    cinfos[i].trig_seq = reader.Read<uint8_t>();
    //                    cinfos[i].desc = reader.Read<uint32_t>();
                }
                break;
            }
            case MSG_AI_NAME:
                break;
            case MSG_SHOW_HINT:
                break;
            case MSG_MATCH_KILL:
                break;
            case MSG_CUSTOM_MSG:
                break;
            default:
                break;
        }
        return 0;
    }
    
}
