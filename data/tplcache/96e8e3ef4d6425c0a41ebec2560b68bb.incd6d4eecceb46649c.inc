<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("global","",277,303);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",347,377);
$z[2][4]['name']="cfg_description";
$z[3]=Array("global","",414,441);
$z[3][4]['name']="cfg_keywords";
$z[4]=Array("include","",510,553);
$z[4][4]['filename']="v1/cssscript.htm";
$z[5]=Array("global","",569,601);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("global","",731,756);
$z[6][4]['name']="cfg_cmsurl";
$z[7]=Array("global","",848,874);
$z[7][4]['name']="cfg_cmspath";
$z[8]=Array("global","",961,993);
$z[8][4]['name']="cfg_templets_skin";
$z[9]=Array("include","",1492,1528);
$z[9][4]['filename']="head3.htm";
$z[10]=Array("arclist","\r\n        \r\n				<section>\r\n						<div class=\"content-card-wrapper\">\r\n							<div class=\"content-card\">\r\n								<!-- Article Title -->\r\n								<div class=\"article-title\">\r\n									<a data=\"2465\" target=\"_blank\" href=\"[field:arcurl/]\" class=\"app-title\">\r\n										<h1>[field:title/]	</h1>\r\n									</a>\r\n									<div style=\"padding-top: 10px;\" class=\"pub-time-and-version\"> \r\n										<span class=\"pub-time\">[field:pubdate function=\"GetDateMk(@me)\"/]</span>\r\n									</div>\r\n								</div>\r\n								<a target=\"_blank\" href=\"\" class=\"detail-icon\" title=\"进入应用详情页面\"></a>\r\n								<!-- Article Img -->\r\n								 [field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}' class='article-img'  target='_blank'><img src='{@me['litpic']}'/></a>\"); [/field:array]\r\n							</div>\r\n							<!-- Quote Area -->\r\n							<div class=\"quote-area\">\r\n								<div class=\"quote-words\">\r\n									<a target=\"_blank\" href=\"[field:arcurl/]\" class=\"quote-text\">\r\n									   [field:description runphp='yes']\r\n										  if(@me<>'' )@me = ' <div class=\"intro\">'.@me.'</div> ';\r\n										  [/field:description]\r\n									</a>\r\n								</div>\r\n								    <p>\r\n									<a href=\"/index/member/personalization/tagetuser/285\"><span class=\"user-title\"></span>\r\n									<span style=\"float:right\" class=\"user-name\">[field:writer/]</span></a>\r\n									<span class=\"newsimagenice\">\r\n										<i></i><span>[field:goodpost/]</span>\r\n									</span>\r\n								    </p>\r\n							    </div>\r\n						    </div>\r\n			</section>\r\n			",1704,3346);
$z[10][4]['typeid']="2";
$z[10][4]['flag']="c";
$z[10][4]['orderby']="pubdate";
$z[10][4]['tagid']="index";
$z[10][4]['pagesize']="10";
$z[11]=Array("arcpagelist","",3422,3455);
$z[11][4]['tagid']="index";
$z[12]=Array("pagelist","",3463,3541);
$z[12][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[12][4]['listsize']="5";
$z[13]=Array("global","",3934,3962);
$z[13][4]['name']="cfg_memberurl";
$z[14]=Array("php","\r\n								        if(preg_match(\"#2#\", \$safe_gdopen))\r\n								        {\r\n								        echo '\r\n								        <li class=\"w0 \">\r\n								        <div class=\"logininpt\"> \r\n								        <input type=\"text\" style=\"\" class=\"txt ztag\" tabindex=\"1\" name=\"vdcode\"  placeholder=\"验证码\">\r\n								        </li>\r\n								        <li class=\"w0 \">\r\n								        <div class=\"logininpt\"> \r\n								         <img id=\"vdimgck\" align=\"absmiddle\" onClick=\"this.src=this.src+\\'?\\'\" style=\"cursor:pointer;margin-left:0px;text-transform:uppercase;\" alt=\"看不清？点击更换\" src=\"'.\$cfg_cmspath.'/include/vdimgck.php\"/></div>\r\n								        </li>\r\n								        ';\r\n								        }\r\n								        ",4669,5391);
$z[15]=Array("global","",6401,6429);
$z[15][4]['name']="cfg_memberurl";
$z[16]=Array("channel","\r\n				    <li class='web-tag-list' ><a href='[field:typeurl/]' class='web-tag-list-item'>[field:typename/]</a></li>\r\n				      ",7318,7595);
$z[16][4]['typeid']="2";
$z[16][4]['currentstyle']="<li class='web-tag-list' ><a href='~typelink~' class='web-tag-list-item'>~typename~</a></li>";
$z[17]=Array("include","",8625,8663);
$z[17][4]['filename']="footer3.htm";

?>