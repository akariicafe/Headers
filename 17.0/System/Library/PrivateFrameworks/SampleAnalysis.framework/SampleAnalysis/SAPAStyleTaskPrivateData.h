@class NSString;

@interface SAPAStyleTaskPrivateData : NSObject <SASerializable> {
    int _suspend_count;
    int _faults;
    int _pageins;
    int _cow_faults;
    unsigned int _latency_qos;
    unsigned long long _task_size_bytes;
    unsigned long long _ss_flags;
    unsigned long long _terminatedThreadsUserTimeInNs;
    unsigned long long _terminatedThreadsSystemTimeInNs;
    unsigned long long _terminatedThreadsInstructions;
    unsigned long long _terminatedThreadsCycles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)classDictionaryKey;

@end
