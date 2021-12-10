# stenotypy

QWERTY chord dictionary based on Laszlo's code https://www.autohotkey.com/board/topic/6426-chording-keyboard-strings-sent-at-key-combinations/

- Please note some keyboards will not work completely based on their matrix. Mechanical keyboards are recommended, but my laptop keyboard works surprisingly well so YMMV

This is a dictionary I built for myself to work faster as a transcriptionist. It has many full spellings, common abbreviations, and shortcuts for common words. I found stenography fascinating, but thought that the phonetic spelling concept and idiosynchratic keyboard were actually taking me longer to learn than generating my own spellings for a layout that was intuitive to me. There is also the massive benefit of being able to casually type single letters and chords interchangeably much more easily than with a stenographic keyboard, allowing for a smoother learning curve, simple compensation for library holes, and pidgin typing where you swap between techniques.

If you disagree on the spellings I've chosen or observe some of the many holes in entries, please fork the repository and share what you've come up with that works better!

Technical Stuff and Rules
- Please Read Laszlo's post at the top
Definitions are entered using the keys in QWERTY order, and then Send ____ If you look at the script the syntax is fairly clear.

Additional Notes
- I built this with an ortholinear whose keymap I have attached. The keymap is essentially QWERTY, I just got rid of space (since all chords include space), then duplicated XCVBNM a row lower for my thumbs. I also used pedals for space and backspace. I have since switched from using that back to a common QWERTY keyboard as I am not typing as much as I am editing these days. I still use chords for most words, so I am confident you don't need anything crazy. You will find there are some longer multicharacter spellings that work better when you can barre keys with a single finger

Logic Outline
- Please reference this article for more comprehensive theory https://griffonagedotcom.wordpress.com/2018/11/20/shorthand-on-the-qwerty-keyboard-1875-1917/

Full Words: Just hit the letters in the word! how (how), their (their)

Subtracted Vowels Unless Vowel is First Letter (Words without vowels that sound close enough): multiple (mltpl -> mltp), again (agn)

Word Chunks *Suffixes automatically backspace to compensate for the space at the end of words): ity (ity), ought (ought), br (br) , tion (io), relation (rltn), ship (ship), ing (ing)

Phrases: I don't know (idk), Oh my god. (omg)

Common Abbreviations: because (bc), about (ab)

Shortcuts: nothing (ng), nobody (nbd), just (j.), and (n.), much (m.), know (k.)  

Weird stuff: no (ib) This is because of on (on) and non (on.) I tried to layer them but either way I repeatedly would hit the wrong one so I just moved it over a row. 

Also I use g to signify ing and io to signify tion in spellings. If a word already contains g like go, I use . for going (go.)

Common Compensations: thought (though (tho) + backspace + t) or (th (th.) + ought (ought)), brought (br (br) + ought)

These are just examples, I can't generate a comprehensive explanation at this point so ctrl F is really going to be your friend.
