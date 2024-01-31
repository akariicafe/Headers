@class NSString, BMWriteService;

@interface BMStreamDatastoreOutOfProcessWriter : NSObject <BMStreamDatastoreWriting> {
    NSString *_streamIdentifier;
    Class _class;
    unsigned int _user;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BMWriteService *_writeService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1 outEventSize:(unsigned long long *)a2;
- (BOOL)isDataAccessible;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0 user:(unsigned int)a1;
- (id)initWithStream:(id)a0 user:(unsigned int)a1 eventDataClass:(Class)a2;

@end
