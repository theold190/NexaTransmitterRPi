all: NexaExample

NexaExample: NexaTransmitter.o NexaExample.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $+ -o $@ -lwiringPi

clean:
	$(RM) *.o NexaTransmitter NexaExample