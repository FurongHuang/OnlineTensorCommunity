SRC= CommunityDetection.cpp IOfn.cpp Probability.cpp Pvalue.cpp Spectral.cpp stdafx.cpp Util.cpp
CFLAGS=-lsvd -lm
COPTZ=-O3 -g  -I.
SUPP_WARN=-Wno-write-strings
NX=65879
NA=65879
NB=65879
NC=65880
KHID=10
ALPHA0=0.001
INDEXSTART=1
DATAFOLDER=../data
Data_xa=Gx_a.txt
Data_xb=Gx_b.txt
Data_xc=Gx_c.txt
Data_ba=Gb_a.txt
Data_ca=Gc_a.txt
TESTINGDATA=$(LEARNINGDATA)

RESULTFOLDER=$(DATAFOLDER)
white = WHITE_WRITE.txt
membership=PI_WRITE.txt

community: CommunityDetection.cpp IOfn.cpp Probability.cpp Pvalue.cpp Spectral.cpp stdafx.cpp Util.cpp
	g++ -o $@ $^ $(COPTZ) $(SUPP_WARN) -DNDEBUG -std=c++0x

run:
	./community $(NX) $(NA) $(NB) $(NC) $(KHID)  $(ALPHA0) $(INDEXSTART)  $(DATAFOLDER)/$(Data_xa) $(DATAFOLDER)/$(Data_xb) $(DATAFOLDER)/$(Data_xc) $(DATAFOLDER)/$(Data_ba) $(DATAFOLDER)/$(Data_ca) $(RESULTFOLDER)/$(EIGENVAL) $(RESULTFOLDER)/$(white) $(RESULTFOLDER)/$(membership)

clean:
	rm community
