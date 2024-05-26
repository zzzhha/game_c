#define  _CRT_SECURE_NO_WARNINGS 1
#include"梦境逃离.h"
EVENT Event[36];//暂定有36个事件
IMAGE Event_photo[36];//暂定36个图片
//事件列在下面
void load_event()
{
	//事件0
	Event[0] =
	{
		"避难所的幽暗",
		"在核污染的末日余波中，一家人蜷缩于地下避难所的幽闭角落。避难所内的空气凝滞，带着一股潮湿和霉变的味道，\
		缝隙间不时有细小的虫子蠕动着。头顶的通风管道偶尔滴落着不明的液体，\
		它们沿着锈迹斑斑的管道缓缓滑落，发出嘀嗒的声响。我望向墙角里的蜘蛛，\
		这些蜘蛛似乎觉得它们向我们一样有权利住在这个避难所里。他们到处都是，\
		而且一点也不怕我们。是时候做出改变了。我们再也不想在汤里看到蜘蛛了，再也不想！",//背景故事

		"使用杀虫剂",//选项一
		"使用故事书",//二
		"放任不管",//三

		"",//选项一后续剧情
		"你可以说很奇怪，但我觉得蜘蛛正在试图和我们沟通，它们带来了几只破烂罐头，似乎是想让我们停下来。",//二
		"随着时间的流逝，我的皮肤变得粗糙，视力在黑暗中变得异常敏锐。我获得了在黑暗中生存的新能力。",//三

		{+20,-10,-20},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	//事件一
	Event[1] =
	{
		"房间渡难",
		"你不知经过了多少个房间了，不管遇到什么麻烦，你绝对不会放弃逃离这场梦境的机会！\
		你进到了这个房间，房间四周充满了孔洞，你观察到孔洞在0.5m以上才有，\
		你身旁还放有一个桌子，你不知道这一次又隐藏这什么危险？你选择…",//背景故事

		"嗨，心理作用罢了，有什么好怕的，也许房主人就喜欢这么多的洞洞呢？走了，下个房间!",//选项一
		"（你看向了房间的桌子）哈哈哈！我以桌为盾，绝对防御，管你什么东西！桌子在手，房间乱走。",//二
		"管他有啥东西？别挨老子，我直接爬到门前面去！",//三

		"你刚向前走出一步，啪！一支精致的渔叉精准的命中了你的胸膛，你感觉你的肺已经被贯穿了，温热的血缓缓的从你胸膛流出，你也随之倒下，你的眼前只有黑暗.",//选项后续剧情一
		"你拿起桌子抵在身前，时刻提防孔洞，像一只螃蟹一样左右移动，啪！,一支精致的渔叉稳稳集中你手中的桌子，有惊无险！",//二
		"给我爬！嘿哈！嘿哈！啪！，一支精致的渔叉从你头顶飞过，靠！还好我机智，爬着过去！",//三

		{-50,0,0},
		{0,0,0},
		{-20,+10,+10},
		{0,0,+20},
		{-30,0,0}
	};
	//事件二
	Event[2] = {
		"星空与她",
		"我睁开眼，发现头顶有一片星空，正前方是一台天文望远镜，其余漆黑一片，什么都看不清。\
		突然，耳旁传来了一个温柔的声音：你也喜欢星空吗，你也对天文学有兴趣吗，即使这片大地的天空是虚假的，你也愿意继续去研究它吗？",

		"否认，不，我并不清楚我是如何出现在这里的，也不对天文学感兴趣。",
		"直接发癫，对着这个声音说：好好听的声音，我喜欢你口牙！（跑向那个声音）",
		"选择逃避，只要我闭上双眼，什么事都不会发生（确信）。",

		"那个声音继续说：这样吗....您最近可能会有点小麻烦，希望这东西能帮到您吧。",
		"那个声音的主人似乎皱了下眉，拿出了剑将你击晕了过去。",
		"见你没有说话，那个声音继续说：接下来我会进行天文观测，请您不要打扰我，可以吗？",

		{0,-20,0},
		{0,0,0},
		{0,0,0},
		{0,-20,0},
		{0,0,0}
	};
	Event[3] = {
		"被诅咒的402",

		"“嘿，那新人过来搭把手!”罗特站在摇摇晃晃的梯子上大声喊道。\
		哦”我急忙回应。明天，将是我来到剧组三个月以来的第一次出勤， 大家都忙的热火朝天，这次的目标是那\
		座早已废弃的精神病院“昆池岩”。三个月前，两名青少年来此探险，结果在直播中遭遇诡异事件，下落不明，剧组的一把手\
		陈哥敏感的抓住了这个热点，“这是我们发财的机会!” 他欣喜若狂的说道，眼中散发着对金钱的痴迷\
		出发前一天的晚上，我收到了一封邮件，署名竟然是 我已经去世多年的祖父。此时我打算....",

		"选项1:谁这么无聊!开这种玩笑!(删除信件) ",
		"祖父?这.... (打开信件)",
		"问问剧组的人是否有收到这种信件",

		"\0",
		"我打开了信件，崭新是信封内是截然不同的黄褐色纸张，上面写着“昆 危 千万不 昆”一大串杂乱不堪的文字,只能勉强辨认出一些，似乎在表达什么。",
		"“没有， 你是不是干活干傻了啊”“唉， 看来今晚要早点休息了”(删除信件)",

		{-40,-20,0},
		{0,0,0},
		{0,0,0},
		{0,+25,-20},
		{0,0,+16}
	};
	Event[4] = {
		"虫巢",
		"你不慎一脚踏入软木碎叶搭成的地面陷阱中——你相信这是布莱恩星最“老式作风”的猎人才会使用的陷阱。\
		你站起身，面前有一个巢穴入口。你慢慢地深入虫巢。你拨开倒悬的虫卵，惊奇发现半透明的虫泡中，新生命正用触须挠它还未睁开的复眼。\
		你发现了尽头惊异的景象，在数以百计的“虫泡”堆起的王座上，它昏沉地睡在那里。你眨了下眼，时间流逝了一天。\
		你感到自己正一次又一次观看「虫皇」睡在那里，你希望它睁开眼看你。第一个虫泡轻轻破裂，生命迎来绽开时刻。",

		"拥抱它",
		"等待它",
		"止步于此，转身离开",

		"你抱起扁圆状的虫泡，它的养料漏出，就像一粒开了口的绿细胞。它扭动着虬曲的身体，钻进了你的皮肤里",
		"很快，你的脑袋里开始出现声音……安德雷安富……漫长的等待摧毁了你，你慌忙逃离",
		"你相信，你的人生不需要探险。…当然更重要的是，你害怕在虫巢里直面安德雷安富的子嗣…",

		{-50,-30,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[5] = {
		"幻想购物时刻",
		"你进入了一个漆黑的房间，里面变幻莫测。自顾不暇的你碰到了一位来自虚空的售货员飘在你眼前，\
		此时他正在为你展示商品：愚者，别再为停留此地而苦恼了，来吧你无法拒绝。\
		你气愤的踢了他一脚，雾散开了又返回售货员的模样，看来只能抉择了",

		"一盒过期的巧克力，右上角被啃食过的痕迹很难不让人猜想，在这之前还有人到达过此地？",
		"博学者之怒，帽子里露出层层微光，在一朵早已布满灰尘的魔法帽里",
		"螺旋之门，古希腊掌管**的门吗？不妨试试看",

		"你咬了一口巧克力，精神焕发，无止境的力涌了出来，仿佛这不是过...期的吧，还有半口没吃完先留着吧",
		"心中的愤懑一拥而上，你接过帽子并带上，嵌在帽子上的银环也重新发出摄人的寒光\
		此刻，你获得了莫大的“力量”，轻轻挥手，时间凝固，售货员表情瞬间僵化，我低声细语，然后轻描淡写地结束了这个空间的生命",
		"非常好的门，使我的关卡疯狂旋转,结果出来了！是没有结果！",

		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[6] =
	{
		"关于我转生成史莱姆这档事",
		"原本生活了大量魔物的鸠拉大森林，在利姆露（你）的带领下，各族逐渐融合，而后建立了鸠拉·特恩佩斯特联邦国，\
		但逐渐强大的联邦国被法尔姆斯王国视为眼中钉。如今，法尔姆斯十万大军压阵，你的手下伤残严重，现在是你出场的时候。你会：",

		"化身唐三，使用蓝银缠绕",
		"跪在敌军阵前，求求他们别打了",
		"使用技能神之怒",

		"技能使用不熟练，导致自己被缠绕窒息",
		"获得道具高压锅，被队友压力，扣二十滴血",
		"将敌方全歼，获得赔偿，晋升为魔王，获得厕纸",

		{-30,-20,35},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[7] =
	{
		"魂穿胡惟庸",
		"胡惟庸早年随朱元璋起兵，颇受宠信。历任元帅府奏差、宁国知县、吉安通判、太常少卿等职。\
		洪武三年（1370年），拜中书省参知政事。洪武六年（1373年）七月，任右丞相。\
		洪武十年（1377年），进左丞相，位居百官之首。后勾结中丞涂节、御史大夫陈宁等，并令陈宁坐中书省，阅天下兵马，准备谋反。\
		现为1379年春，距离涂节上书明太祖还有一年，作为现代人的你决定：",

		"大丈夫生于天地之间，岂能郁郁久居人下，干他丫的。",
		"打了一辈子仗决定好好享受，乞骸骨",
		"收拾行李，连夜和家人逃亡。",

		"获得败者食尘，重新开始关卡",
		"\0",
		"怯战蜥蜴附体，被朱元璋发现，后被逮捕，无法逃离被诛九族的命运。",

		{0,0,-50},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}

	};
	Event[8] = {
		"888",
		"随着一阵不适的扭曲感，你穿过“门”，来到了一座城市。\
		你停下仔细打量周围环境，暗红色的月亮低垂在城市鳞次栉比的高楼之上，几乎撑满了半边天空。\
		街上空无一人，你却听见了祂们的低语，在这“喧嚣”的街街角出现了一群穿着黑色礼服的人。\
		看起来挺正常，除了他们都是踮着脚尖走路之外。\
		祂们注意到了你，身体还在继续向前走，脑袋却转过了一个不可思议的弧度盯着你。\
		祂们看的你有点发毛，必须赶紧做点什么，所以你决定……",

		"打不过就加入，你壮着胆子。学着他们的样子踮起了脚尖跟在他们身后…",
		"你大吼一声：“你瞅啥”，然后撩起袖子就冲了上去，和他们打了起来……",
		"你勾了勾手指，大吼一声：“你过来啊”。然后拔腿就跑……",

		"你的做法似乎起作用了，他们把头转了过去，你混在“人”群中，发现他们忽视了你后你的胆子逐渐大了起来，\
		最终，你跟着他们来到一间密室，你进入了密室一番搜寻后获找到一本笔记。",
		"你莽了上去，战神起跳—战神睡觉。你毫无悬念的被打昏了",
		"你的勇气值得称赞，不过这显然不是什么明智的决定。还好他们并没有搭理你",

		{0,-20,0},
		{0,0,0},
		{0,0,0},
		{0,-10,-20},
		{0,0,0}
	};
	Event[9] = {
		"是与否？",
		"打开这扇门，一个黑衣人静静的伫立在远方，你发现你站在悬崖上，\
		黑衣人空灵的声音传来，“想离开这吗？那就陪我玩个游戏吧，你接下可以问我两个问题，我不会说谎，\
		我只会回答【是】和【否】，若我答应带你离开，那我就带你离开，若我不答应你离开，那你永远留在这吧！\
		你焦急的思考着，两个问题就让他带我离开？或许我还可以问点我所关心其他的问题？这还真是场烧脑游戏啊！你选择",

		"“离开这的方法是只有你带我离开吗？我跳下悬崖会死吗？”",
		"“我现实里还活着吗？”“通过七关真能离开这吗？”",
		"“如果我的下一个问题是“你是否会带我离开？”你的回答会与这次的回答一样吗？”",
		"“否，否”回答完你的问题，黑衣人瞬间消失了，你往悬崖下看看，\
		一片漆黑，深不见底，你敢保证跳下去九死一生，你咽了咽口水，\
		也就是说还有其他方法能离开？不会死？也就是说悬崖就是生路？\
		可我该相信他的话吗？不过眼下别无他法，你咬咬牙，一狠心，\
		纵身一跃跳下了悬崖，但迎接你的又是一片未知之地。",
		"“是,是”，回答完你的问题，黑衣人瞬间消失了，原来如此，你还是活着的，\
		你必须通过这七关才能逃离梦境，但显然你失去了黑衣人带你走的机会，你只能继续等待，\
		等待事件的转机，等待途中一不小心你就昏睡了过去！",
		"黑衣人没有正面回答你的问题，“有意思，我就喜欢你这样的聪明人！”\
		黑衣人转身来到你的身边，从胸前拿出玉佩，“这东西关键时刻能保你一命，拿好了！”\
		随后将手伸到你的肩膀上，你只感觉一阵虚幻，面前景色模糊后突然清晰，又来到了一个未知之地。",

		{-30,-50,0},
		{0,0,0},
		{20,0,0},
		{20,-20,50},
		{-10,0,0}
	};
	Event[10] = {
			"求救",
			" 眼前景象变换，你发现自己来到了一处密林，雾气缭绕，\
		此时忽然刮起一阵风，树叶的磨砂声，和树枝的拍打声让你毛骨悚然，\
		但经历以前种种的你早已不再害怕，你催促着自己前进，没走几步你便听到远方传来求救声，\
		你不想过去，梦境凶险应该以自保为主，但很快你便发现不论如何走求救声的大小不变，你便明白，\
		自己一定要过去，你小心翼翼的前往声音的来源处，发现一位美丽的少女正被巨大藤草吞噬，她看到你喜出望外，求你救救她。",
		"保护美少女我义不容辞上前拯救",
		"多半有诈小心前",
		"先看看戏毕竟，刚才那么久她都没事",

		"你冲了过去藤草动的很慢没几下便被你处理，你凑了过去救她，却闻到一股异香之后便头发昏，\
		再醒来发现自己在一处黑暗的环境里，且身体很疼，你用尽全力成功挣出，\
		发现自己竟然是被藤草吞了，十分奇怪幸亏你是体育生凭借多年的沉淀并没有死",
		"你小心靠近，藤草缓慢的攻击，但你很快察觉到了不对，少女的声音很好听但总重复几句话，这时少女身后的藤草发出花粉\
		，你快速捂上了口鼻但还是不小心吸入了一点，身体发软，被藤条打中，你拼尽全力，逃了出去。",
		"你在那个植物的远处观望，少女在那藤草中挣扎，但很快你就发现那不过是规律的摆动罢了，\
		少女的叫声也永远是那几句，你已经识破了那是藤草的伪装，\
		所以你弄了一把火把他烧掉了靠近后得到了一颗发着异香的圆球",

		{-50,-20,0},
		{0,0,0},
		{-20,0,25},
		{0,0,0},
		{0,0,0}
	};
	Event[11] = {
		"部队博士的太空实验计划",
		"因美国和苏联的冷战，世界爆发了核战争。现在地球上到处充满辐射，幸运的是，\
		你和你的家人在核弹爆炸前的60秒逃进了地下避难所。并且带了五罐罐头和三瓶水还有一个电报机。\
		但这样下去食物和水终将消耗殆尽。你和你的家人渴望离开这个鬼地方。\
		某天一阵急促的敲门声惊醒了熟睡中的你。一个声称是博士的人将他的太空计划告诉了你，\
		并表示只要三个罐头和两瓶水，他就可以带你和你的家人飞上太空，开启新生活。",

		"将三个罐头和两瓶水",
		"只给三个罐头",
		"认为博士是骗子，不给罐头和水",

		"你和你的家人被带火箭，火箭缓缓升起，但前方依旧是未知。",
		"博士觉得你羞辱了他，后来带领着士兵把你们避难所洗劫了，包括你们一家人的生命",
		"你们的食物和水得以保留，后来你们发现好像有救援人员发出微弱的电报信号，然后你用避难所里的电报机发送求救信号，\
		且得益于留下的食物和水，你们一家的身体状态良好。三天后，军队找到了你们，你们得救了",

		{0,-70,10},
		{0,0,20},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[12] = {
		"泥沼",
		"眼前景象变换，你发现自己来到了一处草原，目光所及全是高高的草，\
		但眼尖的你很快便发现远处有一个箱子，闪着金光，但另一边，你看到了一个银色的东西埋在土里，你准备",

		"宝箱我来了！！！",
		"我喜欢奇怪的的东西，去找银色的东西。",
		"小心为上，观望一下。",

		"你冲了过去，但很快感到不对，自己好像被什么东西困住了，原来宝箱前是沼泽地，\
		你赶紧跑，但已经被困的很深了，最后你不得不弄伤自己逃离。",
		"你前往寻找那东西，很快你就找到了它，一个银发梳着中分的小鸡玩偶，\
		这时，一个梳着中分得怪人突然出现了，他要走了你的小鸡玩偶，并给了你其他的小鸡玩偶",
		"你等了一会无事发生，你知道你该向下走了",

		{-40,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[13] = {
		"许愿井",
		"眼前景象再度变换，你看到眼前出现了一口古井，旁边立着一块牌子，上面写着许愿井一金币百倍返还，你决定",

		"直接all in疯狂许愿",
		"小心为上只丢10个",
		"不劳而获的事咱不干",

		"许愿井喷出了大量的金币，但拿完金币你感到身体变沉了",
		"拿到1000金币",
		"你什么都没做，这是一杆金色的称出现在你面前，应该是给你的奖励",

		{-20,0,0},
		{0,0,0},
		{-20,0,0},
		{-20,0,20},
		{-30,-10,0}
	};
	Event[14] = {
		"小猫?",
		" 眼前景色变换，到了一片小树林，你正在困惑，突然你听到一声猫叫声，\
		转过头发现了一只通体雪白的小猫，你向他招手，小猫便向你奔来，你决定",

		"抱抱小猫",
		"小心躲开",
		"直接出手",

		"小猫果断出手，你被划伤了",
		"你躲开了猫猫但他的反应很快，还是反手划伤了你，你隐隐听到一句小猫老弟",
		"你击中了猫猫，他一吃痛直接跑了，留下了一个铃铛",

		{-50,-20,0},
		{0,0,0},
		{0,-15,0},
		{0,0,0},
		{0,0,0}
	};
	Event[15] = {
		"斗熊",
		"你不知经历了多少，不管遇到什么麻烦，你绝对不会放弃逃离这场梦境的机会！\
		进入房间，你看到对面墙上显示器“在饥饿的黑熊的攻击下存活一分钟”，“游戏开始！”，\
		然后你就看到体长高达1.8m的凶猛黑熊从牢笼中爬出来，眼睛直直的看向你，嘴里直流口水。\
		你心中顿时冒出无数个问号，所以这是让我和黑熊在这不到30立方米的空间赤手空拳的搏斗？\
		你看看四周，旁边放有一个铁质小盾牌，应该勉强能挡住黑熊的攻击？你还听人说过，遇到出来觅食的黑熊，\
		只要躺下装死黑熊就看不见你就能平安无事。还是你有其他办法？你选择...",

		"你拿起盾牌，准备好应对黑熊的攻击了！",
		"躺下装死吧！",
		"你摆好姿势勾起食指，学着沈腾的模样，朝着黑熊大喊“狗东西！你过来呀！”",

		"饥饿的黑熊快速的向你奔跑过来，你觉得不能从正面抵挡住黑熊的攻击，选择了闪避为主，躲不了再防御。\
		黑熊速度终究还是没你快，你躲过了黑熊的冲撞撕咬，但你也被逼到角落，只有硬抗一波了！黑熊扬起厚重的熊掌狠狠的想你拍击，\
		你作好防御姿势，身体紧绷。“砰”，你顿时感受到巨大的压力，身体被转来的震动震的要发裂，面前的景象开始模糊。",
		"黑熊快速的向你跑来，张开血盆大口，给你开肠破肚，掏心掏肺，你被活生生的吃掉了！！！",
		"狭小的房间里，不断回响着“狗东西！你过来呀！”，黑熊感觉你在挑衅它，\
		你成功激怒了黑熊，它气冲冲向你猛烈的扑去，它企图直接用身体的力量直接压死你，\
		但你岂会等着被压，在它扑来之时，你向侧面躲去，但也被逼到墙角，黑熊故技重施，企图将你在墙角压成肉酱，\
		在又它站立起来之时，你翻动身体，从它胯下溜了出去。",


		{-40,-999,0},
		{0,0,0},
		{40,0,0},
		{0,0,0},
		{0,0,40}
	};
	Event[16] = {
		"深海的呼唤",
		"在一片漆黑的深海中，你发现自己被困在一艘沉船的残骸之中。\
		海水的压力让你感到窒息，四周是无尽的黑暗和寂静，只有偶尔传来的鱼群游动声。你意识到，必须找到出路。",

		"尝试打开舱门",
		"寻找船上的应急灯",
		"静待救援",

		"",
		"你找到了一盏应急灯，微弱的光芒照亮了周围的环境。你发现了一条通往船舱深处的狭窄通道。",
		"随着时间的推移，你看到了你期待的救援，但是你的身体承担了不可逆的伤害。",

		{-30,-10,-50},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[17] = {
		"云端之城",
		"你醒来时发现自己站在一座悬浮在云端的城市中。城市由透明的水晶构成，阳光透过云层，折射出绚丽的光芒。\
		 然而，城市似乎失去了往日的活力，你需要找到让它重新焕发生机的方法",

		"触摸水晶建筑",
		"寻找城市的动力源",
		"走入云朵",

		"水晶中蕴藏着城市的秘密，它们告诉你，你解开了所有的谜题，城市恢复了活力。",
		"你找到了城市的动力源，一个巨大的水晶核心，启动后城市恢复了生机，你成功离开了城市。",
		"你走进了云朵中，但是掉了下去。",

		{+20,-20,-50},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[18] = {
		"时间的迷宫",
		"你发现自己置身于一个由无数时钟构成的迷宫中。\
		每个时钟都在以不同的速度滴答作响，时间在这里变得扭曲和混乱。\
		你需要找到正确的路径，才能逃离这个迷宫",

		"调整最近的时钟",
		"寻找迷宫的地图",
		"跟随滴答声",

		"",
		"你在黑暗中摸索着前进的道路，但你不幸失足，掉入了无尽的深渊。",
		"你跟随滴答声来到了一个巨大的钟楼前，钟楼的钟声似乎能够校正时间的流逝。",

		{10,-20,-50},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[19] = {
		"星际穿越",
		"你醒来时发现自己在一艘穿梭于星际的飞船上。\
		飞船内部充满了高科技的仪器和设备，但船员们似乎都陷入了沉睡。\
		你需要找到唤醒他们的方法，继续你们的星际旅行",

		"我已出仓感觉良好",
		"寻找唤醒船员的方法",
		"独自驾驶飞船",

		"",
		"你找到了一份唤醒船员的协议，你使用了特定的化学药剂，成功唤醒了船员。",
		"你知道以现在的速度不足以在时间内到达目的地，船上的缓冲仓无法容纳所有人，但你果断选择进入深海状态，自然选择，前进四！",

		{-30,-10,-30},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[20] = {
		"战地风云",
		"你现在任职一国将领，你所在的国家正与其他国家作战，这时，军部司令向你发令，要让你进攻这三个地方，你选择：",

		"进攻凡尔登市法乌克斯要塞",
		"进攻太平洋硫磺岛折钵山山洞",
		"进攻苏格兰赫布里底群岛删隐地区",

		"你发现敌人的炸弹，毒气弹想不要钱的一样扔，你失败了",
		"你发现敌人苟在洞里不出去，重型火力不断的在往外轰，你失败了",
		"你发现敌人烟雾弹，电磁脉冲手雷，震荡手雷，破片手雷丢个不停，你失败了",

		{-30,-40,-50},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[21] = {
		"战雷",
		"你在战场指挥部，现在有A,B,C点需要进攻，你选择：",

		"随便进攻一个点",
		"进攻D点！",
		"停止进攻",

		"你的士兵似乎没有什么进攻欲望，你失败了",
		"你的士兵战斗欲望高涨，及时D点并不存在，但这不妨他们把所有点都占据下来",
		"你的士兵对你的指挥很失望，将你斩首了投降了",

		{-50,+30,-999},
		{0,0,0},
		{-10,+20,0},
		{0,+20,0},
		{0,0,0}
	};
	Event[22] = {
		"现代化战争",
		"你身处2042的年代，正投身于一场战争之中，一辆主战坦克正在向你驶来，很明显他看到了你，你会选择：",

		"放下武器，投降",
		"放下武器，投降",
		"放下武器，投降",

		"这辆坦克明显没把你放在眼里，仅仅一炮，你就魂归西天",
		"这辆坦克明显没把你放在眼里，仅仅一炮，你就魂归西天",
		"这辆坦克明显没把你放在眼里，仅仅一炮，你就魂归西天",

		{-50,-50,-50},
		{0,0,0},
		{-20,-20,-20},
		{+10,+10,+10},
		{-20,-20,-20}
	};
	Event[23] = {
		"神秘博物馆",
		"我收到了一封来自博物馆的邀请函，邀请我参加一场即将举行的特殊展览。\
		据说这次展览展出的是一些被诅咒的文物，每一件文物都隐藏着不为人知的秘密。\
		我决定前往这座博物馆，探寻这些文物背后的真相。\
		“咔嚓……”我推开博物馆的大门，走进了这座充满诡异气息的博物馆。\
		馆内陈列着各种奇形怪状的文物，每一件都散发着一种令人不安的气息。\
		我沿着展柜往前走，突然感到一股寒意袭来。",

		"迅速离开博物馆",
		"仔细观察这些文物",
		"询问博物馆工作人员",

		"",
		"我仔细观察着这些文物，突然发现其中一件文物上刻着一些奇怪的符号和文字。\
		我凑近一看，只见这些符号和文字似乎在诉说着一段悲惨的历史。\
		我突然感到一阵头晕目眩，仿佛被这些文物中的诅咒所影响。\
		我挣扎着想要离开博物馆，但身体却不听使唤地走向了一件散发着幽幽绿光的文物前。\
		当我触碰到这件文物时，一股强大的吸力将我吸入了文物之中。"
		"",

		{20,-20,0},
		{0,0,0},
		{0,0,0},
		{0,-10,-20},
		{0,0,20}
	};
	Event[24] = {
		"蛊真人",
		"古月家族老祖古月一代假死千年。如今其被天鹤上人发现并重伤，准备使出血颅蛊，献祭全族血脉，提升资质。\
		现在你魂穿古月方源，和族人躲在血幕天华蛊之中。古月一代威胁你交出天元宝莲，此时你会：",
		"立刻将宝莲交出，协助老祖",
		"拜天鹤上人为师，皈依正道",
		"你病要你命，将一代扔出血幕",

		"你成功让古月一代解困，全族被炼化。"
		"一代被杀，全族被血祭",
		"炼化全族，提升自我资质",

		{-10,0,0},
		{0,0,0},
		{-20,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[25] = {
		"燃烧森林",
		"你被困在着火的森林里，树木不断的倒塌，滚滚浓烟侵入你的鼻腔内，让你喘不过气来。\
		时间紧迫，你需要找到逃脱着火的森林的办法，否则你将会被大火吞噬。\
		但幸运的是，你目前有三样道具（防毒面具，防火锡纸套，手电筒）可以选择让你逃出着火的森林。",

		"选择使用防毒面具",
		"选择选择使用手电筒",
		"选择使用防火锡纸套",

		"你戴上防毒面具，但前面的滚滚浓烟让你看不请前方逃生的路,\
		所幸你平时良好的体力让你能坚持逃出着火的森林。",
		"你使用手电筒向天上照明，救援的直升机发现了你的位置，你因此获救。",
		"你发现好像无法逃出，你决定使用消防防火锡纸套住自己，等火灾过去，再逃出去。\
		 但火势太大，平时消防用的防火锡纸套根本扛不住，你因此葬身火海。",

		{0,10,-200},
		{0,10,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[26] = {
		"末世",
		"第三次世界大战爆发，末日来临，所幸你和你的家人最后在核弹爆炸前逃进了地下避难所，但你们的物资是有限的，\
		所以你们必须与其他的幸存者汇合，不然你和你的家人将会在这个暗无天日的避难所里慢慢死去。\
		但所幸你和你的家人在逃进地下避难所之前带了三样东西（一个挂有铭牌的猫，三个罐头，一个能接受信息的收音机）",

		"选择前往猫挂的铭牌上的地址",
		"用三个罐头支撑你去附近的营地",
		"用收音机接受求救信息",

		"你根据猫上挂着的铭牌来到一个仿佛是高级避难所的地方，你遇见了两个自称是特工的人，他说他能让你们一家人住进所谓的高级避难所，\
		你信了，于是你带着你和你的家人进入了“高级避难所”",
		"用三个罐头去附近的营地，你在路上遇见了一对兄妹，他们说给他们两个罐头能将你们一家人带到附近的营地，\
		你给了，最终你和你的家人被带到附近的营地和其他幸存者一起生活。",
		"你一直在收音机旁，希望能接收到其他幸存者发出的信号，最终一段是仿佛是军方的信号吸引了你，\
		你和自称是军方的人取得联系，并告诉了他们避难所的坐标，你毫无防备的打开了避难所的门，可最终迎接你的并不是所谓的军方，而是暴徒。",

		{20,20,-70},
		{0,20,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[27] = {
		"从零开始的梦境生活",
		"作为重生之人，但是你却只是一个路人甲npc，就这样落寞的渡过寰宇世纪，正在为如此拙劣的身份痛哭流涕的你抬头却看到天上在闪烁着半径20米的绿宝石水花\
		马萨卡，猛地一起身只撞见蓝绿配色的机甲（初号机？？）在与超大型巨人在战斗。不是哥们？？稍纵即逝，一只体型巨大的九尾妖狐出现在此分割战场\
		一道蓝色水柱喷过，“潮水啊，我已归来“，此水龙对战场360°无死角的大扫除，留于此地的你却毫发无伤。“浮世景色百千年依旧，人之在世却如白露与泡影，虚无”，\
		此话伴你耳旁响起，诚然你觉醒了记忆",

		"没错，我就是基拉，新世界的神！！！",
		"进入战斗状态——我将，点燃大海！！！",
		"今天的风儿甚是喧嚣 ，无趣",

		"不行，还不能笑，我要忍住，写完名字后的40秒，大家就会死，在等35秒，我们就在35秒后宣布胜利吧",
		"就此离开，没人会受伤，否则，你们都会死",
		"获得成就：无欲无求，笑口常开",

		{0,-40,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[28] = {
		"全员恶人",
		"在这里，你不仅能接触到来自乡下的小马云，还能拳打日本天皇孙狗（孙笑川），他们不一定能整出好活儿，但这些活大概率都挺缺德，\
		他们有的满口国粹，出口成脏，有的砂仁越货，无恶不作，有的天生出生，无可救药，有的影响恶劣，龙场悟道\
		阿米诺斯语言家丽丽曾说道：”“，接着一个大飞脚呼你脸上，国民小粉红”东雪莲“说：天皇还是收敛了",

		"这个游戏太城市化了，得关掉",
		"我不吃牛肉",
		"我给你补个蛋",

		"你也太现代化了，死吧",
		"全杀光了没补给，你受伤了",
		"吃了个蛋",
		{-999,-30,+20},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	Event[29] = {
		"干票大的？",
		"恍惚间你睁开了双眼，四周人来人往，高楼林立，突然有人扯住你，“你怎么在这，快和我上车，时间来不及了”，\
		一个带着猪头面具的人急忙说道，你一头雾水，好奇问道：“你要带我去干什么？”\
		猪头人低声说道：“我们要去干票大的！”你突然愣住了，这是要抢劫还是杀人？还是刑法上罗列的其他实现财富自由方法？你选择...",

		"好啊！反正是在梦境里，来点刺激的总没错吧？",
		"你可是遵纪守法的好公民！",
		"转身离开",

		"猪头人开车带你潜入了银行，在他开路之下，你们顺利到达金库门前，\
		“破译专家，这金库的电子锁就交给你。”猪头人说到，你心中有一万个草泥马路过，靠原来是认错人了！这破译电子锁，你是一点也不会啊！\
		看你迟迟没有动作，猪头人疑惑起来，“靠原来是冒充仔！”，猪头人惊呼道，他顺手从腰间拿出手枪爆了你的头，番茄汁洒了一地。",
		"你谎称自己要上厕所，赶紧拨打了最近公安局电话，声称有人抢劫，请求警察支援，歹徒戴着猪头面具，很快，警察制服了猪头人，你松了口气！",
		"",

		{-999,0,0},
		{0,0,0},
		{0,0,0},
		{0,20,0},
		{0,0,0}
	};
}