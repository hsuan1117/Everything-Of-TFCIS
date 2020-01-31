
//T22 server use

//setup
const Discord = require('discord.js');
var client = new Discord.Client();
const auth = require('./auth.json');


//prefix
const prefix = "/" ;

//sleep
function Sleep(msc)
{
	var start=new Date().getTime();
	for(var i=0 ; i<1e7 ; i++)
	{
		if((new Date().getTime()-start)> msc)
		{
			break ;
		}
	}
}

//message edit 
function msgEdit (msg, text){
	msg.edit(text)
}

//startup
client.on('ready', () => {
    console.log(`Logged in as ${client.user.tag}!`);
	client.user.setActivity("Use /help for \"Help\""); //set status 
});

//main responseText 
client.on('message', msg => {
  const channel = msg.guild.channels.find(ch => ch.name === '¦øªA¾¹«á¥x');
  if (msg.content.startsWith (prefix + "dick")) {
    msg.channel.send("???????...??????¡I:nose:");
  }
  if (msg.content.startsWith (prefix + "hentai")) {
    msg.channel.send("?ºA¡I¡I", {files:["./image/hentai.png"]});
  }

//backstage
  if (msg.channel.id !== '672018541423099924') {
	console.log("\n" + msg.author.username + "-sent: [" + msg + "]  userID: " + msg.author.id) ;
	channel.send("\n" + msg.author.username + "-sent: [" + msg + "]  userID: " + msg.author.id) ; 
  }
  
//adduser
  if (msg.content.startsWith (prefix + "adduser") ) {
	mention=msg.mentions.users.first() ;
	addperson = msg.member ;
	if(mention != null){addperson=msg.guild.member(mention) ;}
	msgsplit = msg.content.split(" ",2) ;
	rolename = msgsplit[1] ;

	if(rolename == "T22")
	{
		msg.channel.send("??!! " + addperson + "\n¥¿¦b¼W¥[¤j¤H±z¦Ü¨­¤À²Õ" + rolename + "¡A½Ðµyµ¥").then(d_msg => d_msg.delete(1000));
		let role = msg.guild.roles.find(r => r.name === rolename);
		let member = addperson;
		member.addRole(role).catch(console.error);
		Sleep(2000) ;
		msg.channel.send("§¹²¦!! " + addperson + "\n¤w±N¤j¤H±z·s¼W¦Ü¨­¤À²Õ" + rolename + " OwOb").then(d_msg => d_msg.delete(3000)) ;
		msg.react('??');
	}
	else if (rolename == "T21")
	{
		msg.channel.send("??!! " + addperson + "\n¥¿¦b¼W¥[¤j¤H±z¦Ü¨­¤À²Õ" + rolename + "¡A½Ðµyµ¥").then(d_msg => d_msg.delete(1000));
		let role = msg.guild.roles.find(r => r.name === rolename);
		let member = addperson;
		member.addRole(role).catch(console.error);
		Sleep(2000) ;
		msg.channel.send("§¹²¦!! " + addperson + "\n¤w±N¤j¤H±z·s¼W¦Ü¨­¤À²Õ" + rolename + " OwOb").then(d_msg => d_msg.delete(3000));
		msg.react('??');		
	}
	else if (rolename == "T20")
	{
		msg.channel.send("??!! " + addperson + "\n¥¿¦b¼W¥[¤j¤H±z¦Ü¨­¤À²Õ" + rolename + "¡A½Ðµyµ¥").then(d_msg => d_msg.delete(1000));
		let role = msg.guild.roles.find(r => r.name === rolename);
		let member = addperson;
		member.addRole(role).catch(console.error);
		Sleep(2000) ;
		msg.channel.send("§¹²¦!! " + addperson + "\n¤w±N¤j¤H±z·s¼W¦Ü¨­¤À²Õ" + rolename + " OwOb").then(d_msg => d_msg.delete(3000));
		msg.react('??');
	}
	else if (rolename == "teacher")
	{
		msg.channel.send("??!! " + addperson + "\n¥¿¦b¼W¥[¤j¤H±z¦Ü¨­¤À²Õ" + rolename + "¡A½Ðµyµ¥").then(d_msg => d_msg.delete(1000));
		let role = msg.guild.roles.find(r => r.name === rolename);
		let member = addperson;
		member.addRole(role).catch(console.error);
		Sleep(2000) ;
		msg.channel.send("§¹²¦!! " + addperson + "\n¤w±N¤j¤H±z·s¼W¦Ü¨­¤À²Õ" + rolename + " OwOb").then(d_msg => d_msg.delete(3000));
		msg.react('??');
	}
	else if (rolename == "testrole")
	{
		msg.channel.send("??!! " + addperson + "\n¥¿¦b¼W¥[¤j¤H±z¦Ü¨­¤À²Õ" + rolename + "¡A½Ðµyµ¥").then(d_msg => d_msg.delete(1000));
		let role = msg.guild.roles.find(r => r.name === rolename);
		let member = addperson;
		member.addRole(role).catch(console.error);
		Sleep(2000) ;
		msg.channel.send("§¹²¦!! " + addperson + "\n¤w±N¤j¤H±z·s¼W¦Ü¨­¤À²Õ" + rolename + " OwOb").then(d_msg => d_msg.delete(3000));
		msg.react('??');
		msg.delete(3000) ;
	}
	else
	{
		msg.channel.send("3O_OP §ä¤£¨ì¨­¤À²Õ" + rolename + "¡A½Ð¿é¤J¥¿½T¨­¤À²Õ").then(d_msg => d_msg.delete(3000));
		msg.react('??');
		msg.delete(3000) ;
	}
	
  }
  
//limit time message
  if(msg.content.startsWith(prefix+"limited")){
		msgsplit = msg.content.split(" ",2) ;
		var limitedtime = msgsplit[1]*1000 ;
		msg.delete(limitedtime) ;
  }
  
});


/* Create an event listener for new guild members
   the welcome bot main code */
client.on('guildMemberAdd', member => {
  // Send the message to a designated channel on a server:
  const channel = member.guild.channels.find(ch => ch.name === '·s¶i¤H­û');
  // Do nothing if the channel wasn't found on this server
  if (!channel) return;
  // Send the message, mentioning the member
  console.log("${member} added into server") ;
  channel.send(`Åwªï¨Ó¨ìT22ªºDiscord¦øªA, ${member}\n\`\`\`md\n#¶K¤ß´£¿ô\n[¶i¤J¦øªA­n°µªº][½Ð¥ý­d­Ý¥H¤UÀW¹D]\n1. <#info>\n2. <#ª`·N¨Æ¶µ>\n´NÂæÙT\`\`\``);
});

//login using the bot's token 
client.login(auth.token);
