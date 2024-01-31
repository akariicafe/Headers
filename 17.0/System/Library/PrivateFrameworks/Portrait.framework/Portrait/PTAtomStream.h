@class NSError;
@protocol PTByteStream;

@interface PTAtomStream : NSObject

@property (readonly) unsigned long long atomSize;
@property (readonly) unsigned long long atomDataOffset;
@property (readonly) unsigned long long globalAtomOffset;
@property (readonly) unsigned long long globalEndOffset;
@property (readonly, getter=isAtEndOfStream) BOOL atEndOfStream;
@property (readonly) BOOL didReadAtomVersionAndFlags;
@property (readonly) id<PTByteStream> byteStream;
@property (readonly) PTAtomStream *parentStream;
@property (readonly) BOOL hasAtom;
@property (readonly) unsigned int atomType;
@property (readonly) unsigned long long atomDataSize;
@property (readonly) unsigned long long atomVersion;
@property (readonly) unsigned long long atomFlags;
@property (readonly) NSError *error;

- (void).cxx_destruct;
- (void)setError:(id)a0;
- (id)debugDescription;
- (id)initWithParent:(id)a0;
- (void)_readAtomHeader;
- (void)_setEndOfStream;
- (void)_debugLogAtomReaderState;
- (void)_debugLogBytes:(const void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)_errorForByteStreamError:(id)a0;
- (id)_errorForReadPastLimit:(unsigned long long)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (void)_readBytes:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (void)_setErrorForByteStreamIfNeeded;
- (void)advanceToNextAtom;
- (unsigned long long)globalAtomDataOffset;
- (id)initWithByteStream:(id)a0;
- (id)initWithByteStream:(id)a0 offset:(unsigned long long)a1;
- (id)initWithParent:(id)a0 offset:(unsigned long long)a1;
- (void)readCurrentAtomDataBytes:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (void)readCurrentAtomVersionAndFlags;

@end
