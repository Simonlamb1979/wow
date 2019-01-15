/*表格说明：
_________________________________________________________________________________________________________
| id |Expansion|MenuClass|Icon|Title|       PRG      |  Team | Param  | GmLevel |   X   |   Y    |   Z   |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|索引|   版本  |   首页  |图标|标题 |     0首页      |0公用  | 次页面 | GM级别  |  无   |   无   |   无  |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|唯一| 0为公用 |         |    |     |   1：传送服务  |469联盟| 地图ID |         |  X点  |  Y点   |  Z点  |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    | 2为335  |         |    |     |   2：飞行点开  |67部落 |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    | 3为434  |         |    |     |   3：地图全开  |       |        |         |  费用 |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  4：恢复生命   |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |   5：物品修理  |       |        |         |  费用 |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |   6：播放电影  |       |        |         |电影ID |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |   7：随身银行  |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |   8：技能提升  |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  9：施放技能   |       |        |         |技能ID |  金钱  |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  10：召唤NPC   |       |        |         |NPC_ID | 时间   |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  11：改变大小  |       |        |         |       |1为正常 |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  12：版本说明  |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  13：变身NPC   |       |        |         |NPC_ID |  尺寸  |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |14：专业技能加点|       |        |         |技能ID |  点数  |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  15：变更男女  |       |        |         | 大小  |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     | 16：变身后还原 |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     | 17：副本重置   |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  18：学习技能  |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  19：播放音乐  |       |        |         |音乐ID |  金钱  |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |   20：重命名   |       |        |         |       |  金钱  |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  21：复原命值  |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |  22：回城冷却  |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |23：上帝模式开启|       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |24：上帝模式关闭|       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |25：去除虚弱状态|       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|
|    |         |         |    |     |26：重置天赋    |       |        |         |       |        |       |
|____|_________|_________|____|_____|________________|_______|________|_________|_______|________|_______|

其他说明：费用以铜作单位(100铜＝1银，100银＝1金)，时间以毫秒为单位(1000毫秒＝1秒)    XYZ三项留空的，表示不用填
V4.0
由于大灾变之后的地形修改，所以变更了Expansion的值，让传送地址更好的共存

Expansion的值 版本        Expansion号  附加地图
1          燃烧的远征     1           外域   31
2          巫妖王之怒     2           北裂境 30
4          大灾变         3           新地图 28
8          熊猫人         4           新大陆 24
16         德拉诺之王     5

V3.1
添加随机说话 2013.12.03

v3:新增功能
2013.11.4
添加了上帝模式，去除虚弱状态，重置天赋，修复了回复生命、重置副本

v2:合拼版本  2013.05.08
把3.3.5与4.3.4的数据合拼共用，源码:`Version` IN(0,2)为4.3.4版本；`Version` IN(0,1)为3.3.5版本

v1:最初版本  2012.05.24
*/
#include "ScriptMgr.h"
#include "Player.h"
#include "WorldSession.h"
#include "DatabaseEnv.h"
#include "ScriptedGossip.h"
#include "ScriptedCreature.h"
#include "ScriptSystem.h"

#define TEXT_HELLO 100100
#define TEXT_FIRST 100101
#define TEXT_SECOND 100102

class Teleporter : public CreatureScript
{
public:
    Teleporter() : CreatureScript("Teleporter") { }

    Item_Teleporter tmp;

    bool OnGossipHello(Player *player, Creature *creature)
    {
        uint8 Expansion = player->GetSession()->GetExpansion();
        //判断是否死亡状态
        if (player->isDead())
        {
            player->ResurrectPlayer(100);
            player->Say(" |Cff00ff00我已复活。|R ", LANG_UNIVERSAL);
            return true;
        }
        //判断是否飞行及坐骑状态
        if (player->IsInFlight() || (player->IsMounted()))
        {
            CloseGossipMenuFor(player);
            player->Say(" |CFFFF0000不能在乘骑及飞行中使用。|R ", LANG_UNIVERSAL);
            return true;
        }
        QueryResult result = WorldDatabase.Query("SELECT * FROM Teleport_Template WHERE `MenuClass`=0");
        do {
            Field *fields = result->Fetch();
            tmp.expansion = fields[1].GetInt32();
            tmp.Icon = fields[3].GetInt32();
            tmp.Title = fields[4].GetString();
            tmp.Team = fields[6].GetInt32();
            tmp.Param = fields[7].GetInt32();
            tmp.GmLevel = fields[8].GetInt32();
            if ((player->GetTeam() == tmp.Team || tmp.Team == 0) && player->GetSession()->GetSecurity() >= tmp.GmLevel && (tmp.expansion == 0 || ((1 << (Expansion - 1)) & tmp.expansion)))  //只显示本阵营的、中立的、GM级别的和同版本的
                AddGossipItemFor(player, tmp.Icon, tmp.Title, GOSSIP_SENDER_MAIN, tmp.Param);
        } while (result->NextRow());
        SendGossipMenuFor(player, TEXT_HELLO, creature->GetGUID());
        return true;
    }

    void SendDefaultMenu(Player* player, Creature* creature, uint32 sender)
    {
        uint8 Expansion = player->GetSession()->GetExpansion();
        if (sender <= 1000) //显示次级菜单
        {
            QueryResult result = WorldDatabase.PQuery("SELECT * FROM Teleport_Template WHERE `MenuClass`=%d", sender);
            if (result)
            {
                do {
                    Field *fields = result->Fetch();
                    tmp.expansion = fields[1].GetInt32();
                    tmp.Icon = fields[3].GetInt32();
                    tmp.Title = fields[4].GetString();
                    tmp.PRG = fields[5].GetInt32();
                    tmp.Team = fields[6].GetInt32();
                    tmp.Param = fields[7].GetInt32();
                    tmp.GmLevel = fields[8].GetInt32();
                    if ((player->GetTeam() == tmp.Team || tmp.Team == 0) && player->GetSession()->GetSecurity() >= tmp.GmLevel && (tmp.expansion == 0 || ((1 << (Expansion - 1)) & tmp.expansion)))  //只显示本阵营的、中立的、GM级别的和同版本的
                        AddGossipItemFor(player, tmp.Icon, tmp.Title, GOSSIP_SENDER_MAIN, fields[0].GetInt32() + 1000);
                } while (result->NextRow());
                SendGossipMenuFor(player, TEXT_HELLO, creature->GetGUID());
            }
        }
        // 执行具体菜单动作
        if (sender >= 1000)
        {
            int MenuID = sender - 1000;
            QueryResult result = WorldDatabase.PQuery("SELECT * FROM Teleport_Template WHERE `id`=%d", MenuID);
            if (result)
            {
                Field *fields = result->Fetch();
                tmp.expansion = fields[1].GetInt32();
                tmp.PRG = fields[5].GetInt32();
                tmp.Param = fields[7].GetInt32();
                tmp.GmLevel = fields[8].GetInt32();
                tmp.x = fields[9].GetFloat();
                tmp.y = fields[10].GetFloat();
                tmp.z = fields[11].GetFloat();
                switch (tmp.PRG)
                {
                case 0: //菜单跳转,菜单页参数存于Param1字段中
                    if (tmp.Param)
                    {
                        QueryResult result = WorldDatabase.PQuery("SELECT * FROM Teleport_Template WHERE `MenuClass`=%d", tmp.Param);
                        if (result) {
                            do {
                                Field *fields = result->Fetch();
                                tmp.expansion = fields[1].GetInt32();
                                tmp.Icon = fields[3].GetInt32();
                                tmp.Title = fields[4].GetString();
                                tmp.PRG = fields[5].GetInt32();
                                tmp.Team = fields[6].GetInt32();
                                tmp.Param = fields[7].GetInt32();
                                tmp.GmLevel = fields[8].GetInt32();
                                if ((player->GetTeam() == tmp.Team || tmp.Team == 0) && player->GetSession()->GetSecurity() >= tmp.GmLevel && (tmp.expansion == 0 || ((1 << (Expansion - 1)) & tmp.expansion)))  //只显示本阵营的、中立的、GM级别的和同版本的
                                    if (tmp.PRG)
                                        AddGossipItemFor(player, tmp.Icon, tmp.Title, GOSSIP_SENDER_MAIN, fields[0].GetInt32() + 1000);
                                    else
                                        AddGossipItemFor(player, tmp.Icon, tmp.Title, GOSSIP_SENDER_MAIN, tmp.Param);
                            } while (result->NextRow());
                            SendGossipMenuFor(player, TEXT_HELLO, creature->GetGUID());
                        }
                    }
                    else
                    {
                        OnGossipHello(player, creature);
                    }
                    break;
                case 1: //一般传送功能
                    CloseGossipMenuFor(player);
                    player->TeleportTo(tmp.Param, tmp.x, tmp.y, tmp.z, 0.0f);
                    break;
                case 2: //激活飞行点,仅单次登录有效
                    for (uint8 i = 0; i < 8; i++)
                    {
                        player->SetTaxiCheater(true);
                    }
                    player->Say(" |cff888888开启飞行点了，你作弊了吧。|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;
                case 3: //地图全开,收费为X
                    if (player->GetMoney() < tmp.x)
                    {
                        player->Say(" |cff888888我没钱了。|R ", LANG_UNIVERSAL);
                        OnGossipHello(player, creature);
                        break;
                    }
                    else
                        player->ModifyMoney(-tmp.x);
                    for (uint8 i = 0; i < PLAYER_EXPLORED_ZONES_SIZE; ++i)
                        player->SetFlag(ACTIVE_PLAYER_FIELD_EXPLORED_ZONES + i, 0xFFFFFFFF);
                    player->Say(" |cff888888我的地图全开啦。|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;
                case 4://治疗生命
                    player->SetHealth(player->GetMaxHealth());
                    player->Say(" |cff888888我的生命值全满啦。|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;
                case 5: //修理装备耐久度
                    if (player->GetMoney() < tmp.x)
                    {
                        player->Say(" |cff888888我没钱了。|R ", LANG_UNIVERSAL);
                        OnGossipHello(player, creature);
                        break;
                    }
                    else
                    {
                        player->ModifyMoney(-tmp.x);
                        player->DurabilityRepairAll(true, 0, 0);
                        player->Say(" |cff888888我的物品修理完毕。|R ", LANG_UNIVERSAL);
                        CloseGossipMenuFor(player);
                        break;
                    }
                    break;
                case 6: //播放电影
                    CloseGossipMenuFor(player);
                    player->SendMovieStart(tmp.x);//x为电影ID，2为经典，14燃烧的远征，16为巫妖王之怒
                    break;
                case 7: //随身银行
                    player->GetSession()->SendShowBank(player->GetGUID());
                    CloseGossipMenuFor(player);
                    break;
                case 8: //技能提升
                    player->UpdateSkillsToMaxSkillsForLevel();
                    player->Say(" |Cff00ff00我的技能已提升到最大。|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;
                case 9: //施放技能 tmp.y里的是技能花费金钱
                    if (player->GetMoney() >= tmp.y)
                    {
                        player->ModifyMoney(tmp.y);
                        player->CastSpell(player, tmp.x, true);//tmp.x里的是技能id
                        player->Say(" |cff888888各位闪远，我的技能开始发挥作用了。|R ", LANG_UNIVERSAL);
                        CloseGossipMenuFor(player);
                        break;
                    }
                    else
                        player->Say(" |cff888888我没钱了。|R ", LANG_UNIVERSAL);
                    OnGossipHello(player, creature);
                    break;
                case 10://召唤NPC x为NPC的id，y为刷新时间（单位：毫秒）
                    CloseGossipMenuFor(player);
                    player->SummonCreature(tmp.x, player->GetPositionX() + 3, player->GetPositionY(), player->GetPositionZ(), 0, TEMPSUMMON_TIMED_DESPAWN, tmp.y);
                    player->Say(" |cff888888天灵灵，地灵灵，我要召唤NPC了。|R ", LANG_UNIVERSAL);
                    break;
                case 11: // 变大或变小  y为尺寸
                    CloseGossipMenuFor(player);
                    player->SetFloatValue(OBJECT_FIELD_SCALE_X, tmp.y);
                    player->Say(" |cff888888天灵灵，地灵灵，我要变！！|R ", LANG_UNIVERSAL);
                    break;
                case 12://版本说明
                    OnGossipHello(player, creature);
                    player->Say(" |cff888888现在版本为T-623_V2.0|R ", LANG_UNIVERSAL);
                    break;
                case 13:// 变身
                    CloseGossipMenuFor(player);
                    player->SetDisplayId(tmp.x);
                    player->SetFloatValue(OBJECT_FIELD_SCALE_X, tmp.y);
                    player->Say(" |cff888888天灵灵，地灵灵，我要变！！|R ", LANG_UNIVERSAL);
                    break;
                case 14:// 专业技能升级 x为技能ID，Y为每次升的点数
                    if (player->HasSkill(tmp.x))
                    {
                        player->UpdateSkillsToMaxSkillsForLevel();
                        player->Say(" |cff888888我的技能已满|R ", LANG_UNIVERSAL);
                        CloseGossipMenuFor(player);
                        return;
                    }
                    player->Say(" |cff888888这个技能我还没有学习呀|R ", LANG_UNIVERSAL);
                    OnGossipHello(player, creature);
                    break;
                case 15://改变男女
                        player->SetByteValue(UNIT_FIELD_BYTES_0, 2, tmp.x);
                        player->SetByteValue(PLAYER_BYTES_3, 0, tmp.x);
                        player->InitDisplayIds();
                        player->Say(" |cff888888变性手术开始……|R ", LANG_UNIVERSAL);
                        CloseGossipMenuFor(player);
                    break;
                case 16://变身后还原
                    player->InitDisplayIds();
                    player->Say(" |cff888888我得回复原状了……|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;
                case 17://重置副本
                    /*for (uint8 i = 0; i < MAX_DIFFICULTY; ++i)
                    {
                        Player::BoundInstancesMap &binds = player->GetBoundInstances(Difficulty(i));
                        for (Player::BoundInstancesMap::iterator itr = binds.begin(); itr != binds.end();)
                        {
                            player->UnbindInstance(itr, Difficulty(i));
                        }
                    }
                    player->InitDisplayIds();
                    player->Say(" |cff888888我的副本重置了。|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);*/
                    break;
                case 18://学习技能
                    if (player->HasSpell(tmp.x))
                    {
                        player->InitDisplayIds();
                        player->Say(" |cff888888我已学习了这个技能……|R ", LANG_UNIVERSAL);
                        CloseGossipMenuFor(player);
                    }
                    else
                    {
                        player->LearnSpell(tmp.x, false);
                        player->Say(" |cff888888我又添加一项技能了|R ", LANG_UNIVERSAL);
                        OnGossipHello(player, creature);
                        break;
                    }
                    break;
                case 19://播放音乐，X是音乐ID，在sound.dbc中找
                    player->PlayDirectSound(tmp.x, player);
                    OnGossipHello(player, creature);
                    player->Say(" |cff888888请听音乐！|R ", LANG_UNIVERSAL);
                    break;
                case 20://重命名
                    if (player->GetMoney() >= tmp.y)
                    {
                        player->ModifyMoney(tmp.y);
                        player->Say(" |Cff00ff00在小退后可变更姓名。|R ", LANG_UNIVERSAL);
                        player->SetAtLoginFlag(AT_LOGIN_RENAME);
                        CloseGossipMenuFor(player);
                    }
                    else
                    {
                        OnGossipHello(player, creature);
                        player->Say(" |cff888888我没钱了。|R ", LANG_UNIVERSAL);
                    }
                    break;
                case 21://治疗生命
                    if (player->GetPowerType() == POWER_MANA)
                        player->SetPower(POWER_MANA, player->GetMaxPower(POWER_MANA));
                    player->SetHealth(player->GetMaxHealth());
                    player->Say(" |cff888888我的生命值全满啦。|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;
                case 22://回城冷却-4.3.4版本
                    player->GetSession()->GetPlayer()->SetCommandStatusOn(CHEAT_COOLDOWN);
                    player->CastSpell(player, 8690, true);//回城技能id
                    CloseGossipMenuFor(player);
                    player->Say(" |cff888888回城啰!|R ", LANG_UNIVERSAL);
                    player->GetSession()->GetPlayer()->SetCommandStatusOff(CHEAT_COOLDOWN);
                    break;
                case 23://上帝模式开启
                    player->GetSession()->GetPlayer()->SetCommandStatusOn(CHEAT_GOD);
                    if (player->getClass() == CLASS_WARRIOR)
                    {
                        player->SetMaxPower(POWER_RAGE, 1000000);
                        player->SetPower(POWER_RAGE, 1000000);
                    }
                    if (player->getClass() == CLASS_DEATH_KNIGHT)
                    {
                        player->SetMaxPower(POWER_RUNIC_POWER, 1000000);
                        player->SetPower(POWER_RUNIC_POWER, 1000000);
                    }
                    player->Say(" |Cff00ff00上帝模式开启!|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;
                case 24://上帝模式关闭
                    player->Say(" |CFFFF0000上帝模式已关闭!|R ", LANG_UNIVERSAL);
                    player->GetSession()->GetPlayer()->SetCommandStatusOff(CHEAT_GOD);
                    if (player->getClass() == CLASS_WARRIOR)
                    {
                        player->SetMaxPower(POWER_RAGE, 100);
                        player->SetPower(POWER_RAGE, 0);
                    }
                    if (player->getClass() == CLASS_DEATH_KNIGHT)
                    {
                        player->SetMaxPower(POWER_RUNIC_POWER, 100);
                        player->SetPower(POWER_RUNIC_POWER, 0);
                    }
                    CloseGossipMenuFor(player);
                    break;
                case 25://去除虚弱状态
                    if (player->HasAura(15007))
                        player->RemoveAura(15007);
                    player->Say(" |Cff00ff00已去除虚弱状态!|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;
                case 26://重置天赋
                    player->ResetTalents(true);
                    player->SendTalentsInfoData();
                    player->Say(" |cff888888我的天赋已重置。|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;
                case 27://变更种族
                    player->SetAtLoginFlag(AT_LOGIN_CHANGE_RACE);
                    player->Say(" |cFF2E8B57种族变更在小退后生效。|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                case 28:
                    player->SetAtLoginFlag(AT_LOGIN_CHANGE_FACTION);
                    player->Say(" |cff0000ff阵营变更在小退后生效。|R ", LANG_UNIVERSAL);
                    CloseGossipMenuFor(player);
                    break;

                default: //未知功能
                    break;
                }
            }
            else
                player->Say(" |CFFFF0000这个功能还没有开发出来。|R ", LANG_UNIVERSAL);
        }
    }

    bool OnGossipSelect(Player *player, Creature *creature, uint32 sender, uint32 action)
    {
        // Main menu
        ClearGossipMenuFor(player);
        if (sender == GOSSIP_SENDER_MAIN)
            SendDefaultMenu(player, creature, action);
        return true;
    }
};
void AddSC_Teleporter()
{
    new Teleporter();
}
