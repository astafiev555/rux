(function(){var d=function(e){var c=[],f;for(f in e)c.push(f+"="+e[f]);return c.join("\n")};var j=function(e){for(var c,f=e.origin,b=e.data.split("\n"),g={},a=0;a<b.length;a++){var h=b[a].indexOf("=");-1!=h&&(g[b[a].substr(0,h)]=b[a].substr(h+1))}if("google_loc_request"==g[0]){b={};b[1]=g[1];b[2]=2;for(var a=window,g=0,h=a,i=0;a!=a.parent;){a=a.parent;i++;try{c=!!a.location.href||""===a.location.href}catch(l){c=!1}c&&(h=a,g=i)}c=h;b[3]=c.location.href;b[4]={"http://googleads.g.doubleclick.net":1,"http://pagead2.googlesyndication.com":1,"https://googleads.g.doubleclick.net":1,"https://pagead2.googlesyndication.com":1}.hasOwnProperty(f)?
c.document.referrer:"";b[5]=g;e.source.postMessage(d(b),f)}};window.addEventListener?window.addEventListener("message",j,!1):window.attachEvent&&window.attachEvent("onmessage",j);if(window==top)if(document.body){var k=document.createElement("IFRAME");k.frameBorder=0;k.name="google_top_static_frame";k.style.height=0;k.style.width=0;k.style.position="absolute";k.src="//googleads.g.doubleclick.net/pagead/blank.html";document.body.appendChild(k)}else document.write("<iframe frameBorder='0' src='//googleads.g.doubleclick.net/pagead/blank.html' name='google_top_static_frame' style='height:0;width:0;position:absolute'></iframe>");})();
