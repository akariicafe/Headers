@class NSString, SATimestamp;

@interface SAHIDStep : NSObject {
    int _pid;
    SATimestamp *_timestamp;
}

@property (readonly) unsigned int debugid;
@property (readonly) NSString *debugidString;
@property (readonly) SATimestamp *timestamp;
@property (readonly) int pid;
@property (readonly) unsigned long long tid;

- (void).cxx_destruct;
- (id)debugDescription;

@end
