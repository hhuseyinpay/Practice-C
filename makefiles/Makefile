VPATH = src
CPPFLAGS = -I include

count_words: count_words.o lexer.o 
	gcc $(CPPFLAGS) $^ -o $@

count_words.o: count_words.c
	gcc $(CPPFLAGS) -c $<

counter.o: counter.c include/counter.h include/lexer.h
	gcc $(CPPFLAGS) -o $<
	
lexer.o: lexer.c
	gcc $(CPPFLAGS) -c $<

lexer.c: lexer.l
	flex -t $< > $@
