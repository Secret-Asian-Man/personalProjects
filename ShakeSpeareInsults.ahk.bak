
;==================================================================
								;COMPLIMENT
:O:/comp::
:O:/compliment::

random, ran1,1,10
random, ran2,1,10
random, ran3,1,9

compliment1=1:rare|2:sweet|3:fruitful|4:brave|5:sugared|6:flowering|7:precious|8:gallant|9:delicate|10:celestial
compliment2=1:honey-tongued|2:well-wishing|3:fair-faced|4:best-tempered|5:tender-hearted|6:tiger-booted|7:smooth-faced|8:thunder-darting|9:sweet-suggesting|10:young-eyed
compliment3=1:smilet|2:toast|3:cukoo-bud|4:nose-herb|5:wafer-cake|6:pigeon-egg|7:welsh cheese|8:song|9:true-penny
			
complimentWord1 := Dict(compliment1, ran1)
complimentWord2 := Dict(compliment2, ran2)
complimentWord3 := Dict(compliment3, ran3)

sendevent %  "Thou "complimentWord1 " " complimentWord2 " " complimentWord3 " "
return
;==================================================================

;==================================================================
								;INSULT
:O:/in::
:O:/insult::
random, ran1,1,50
random, ran2,1,50
random, ran3,1,50

;base=1:|2:|3:|4:|5:|6:|7:|8:|9:|10:|11:|12:|13:|14:|15:|16:|17:|18:|19:|20:|21:|22:|23:|24:|25:|26:|27:|28:|29:|30:|31:|32:|33:|34:|35:|36:|37:|38:|39:|40:|41:|42:|43:|44:|45:|46:|47:|48:|49:|50:

insult1=1:artless|2:bawdy|3:beslubbering|4:bootless|5:churlish|6:cockered|7:clouted|8:craven|9:currish|10:dankish|11:dissembling|12:droning|13:errant|14:fawning|15:fobbing|16:froward|17:frothy|18:gleeking|19:goatish|20:gorbellied|21:impertinent|22:infectious|23:jarring|24:loggerheaded|25:lumpish|26:mammering|27:mangled|28:mewling|29:paunchy|30:pribbling|31:puking|32:puny|33:qualling|34:rank|35:reeky|36:roguish|37:ruttish|38:saucy|39:spleeny|40:spongy|41:surly|42:tottering|43:unmuzzled|44:vain|45:venomed|46:villainous|47:warped|48:wayward|49:weedy|50:yeasty

insult2= 1:base-court|2:bat-fowling|3:beef-witted|4:beetle-headed|5:boil-brained|6:clapper-clawed|7:clay-brained|8:common-kissing|9:crook-pated|10:dismal-dreaming|11:dizzy-eyed|12:doghearted|13:dread-bolted|14:earth-vexing|15:elf-skinned|16:fat-kidneyed|17:fen-sucked|18:flap-mouthed|19:fly-bitten|20:folly-fallen|21:fool-born|22:full-gorged|23:guts-griping|24:half-faced|25:hasty-witted|26:hedge-born|27:hell-hated|28:idle-headed|29:ill-breeding|30:ill-nurtured|31:knotty-pated|32:milk-livered|33:motley-minded|34:onion-eyed|35:plume-plucked|36:pottle-deep|37:pox-marked|38:reeling-ripe|39:rough-hewn|40:rude-growing|41:rump-fed|42:shard-borne|43:sheep-biting|44:spur-galled|45:swag-bellied|46:tardy-gaited|47:tickle-brained|48:toad-spotted|49:unchin-snouted|50:weather-bitten

insult3= 1:apple-john|2:baggage|3:barnacle|4:bladder|5:boar-pig|6:bugbear|7:bum-bailey|8:canker-blossom|9:clack-dish|10:clotpole|11:coxcomb|12:codpiece|13:death-token|14:dewberry|15:flap-dragon|16:flax-wench|17:flirt-gill|18:foot-licker|19:fustilarian|20:giglet|21:gudgeon|22:haggard|23:harpy|24:hedge-pig|25:horn-beast|26:hugger-mugger|27:joithead|28:lewdster|29:lout|30:maggot-pie|31:malt-worm|32:mammet|33:measle|34:minnow|35:miscreant|36:moldwarp|37:mumble-news|38:nut-hook|39:pigeon-egg|40:pignut|41:puttock|42:puttock|43:ratsbane|44:scut|45:skainsmate|46:strumpet|47:varlot|48:vassal|49:whey-face|50:wagtail

insultWord1 := Dict(insult1, ran1)
insultWord2 := Dict(insult2, ran2)
insultWord3 := Dict(insult3, ran3)

send %  "Thou "insultWord1 " " insultWord2 " " insultWord3 " "
;Thou rank idle-headed measle Thou craven bat-fowling clack-dish Thou surly plume-plucked clack-dish Thou qualling fool-born malt-worm Thou beslubbering pox-marked flirt-gill 
	return
	
	Dict(dictName,key) {
	keyPos := InStr(dictName,key)
	dictStr2 := SubStr(dictName,keyPos)
	IfInString , dictStr2 , | 
	{
		endPos := InStr(dictStr2, "|")
	}else{
		endPos := StrLen(dictStr2)+1
	}
	startPos := StrLen(key)+2
	returnValue := SubStr(dictStr2,startPos,(endPos-startPos))
    return returnValue
}
;==================================================================
