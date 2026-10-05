CC ?= gcc
CFLAGS ?= -Wall -Wextra -O2
TARGET = alice
SRCS = alice-app.c

.PHONY: all clean install

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

install: $(TARGET)
	install -d $(DESTDIR)$(bindir)
	install -m 0755 $(TARGET) $(DESTDIR)$(bindir)

clean:
	rm -f $(TARGET)
