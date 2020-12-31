.PHONY: clean

shell: shell.c
	gcc -g -fno-stack-protector -z execstack -o $@ $^

clean:
	rm -f frozen
