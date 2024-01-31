@class NSString, NTPBRecordBase, NSData, PBCodable;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recordLock;
    PBCodable *_record;
    NTPBRecordBase *_recordBase;
    NSData *_recordData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readValueFromKeyValuePair:(id)a0;
+ (int)keyValuePairType;

@end
