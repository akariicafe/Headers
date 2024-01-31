@class NSString, NSData, BMFrame, BMStreamMetadata;
@protocol BMStoreData;

@interface BMStoreEvent : NSObject <BMStoreEvent, NSSecureCoding> {
    id<BMStoreData> _eventBody;
    Class _dataType;
    unsigned long long _frameOffset;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BMFrame *frame;
@property (readonly, nonatomic) Class dataType;
@property (readonly, nonatomic) BMStreamMetadata *metadata;
@property (readonly, nonatomic) NSData *eventBodyData;
@property (readonly, nonatomic) unsigned int eventBodyDataVersion;
@property (readonly, nonatomic) unsigned long long eventCategory;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) id<BMStoreData> eventBody;
@property (readonly, nonatomic) unsigned char error;
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithEventType:(Class)a0 eventData:(id)a1 dataVersion:(unsigned int)a2;
+ (id)new;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithFrame:(id)a0 error:(unsigned char)a1;
- (id)initWithFrame:(id)a0 segmentName:(id)a1 frameOffset:(unsigned long long)a2 eventBodyData:(id)a3 eventBodyDataVersion:(unsigned int)a4 dataType:(Class)a5 eventCategory:(unsigned long long)a6 timestamp:(double)a7 metadata:(id)a8 error:(unsigned char)a9;
- (void).cxx_destruct;
- (id)bookmark;
- (BOOL)isEqual:(id)a0;
- (id)initWithFrame:(id)a0 error:(unsigned char)a1 metadata:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(id)a0 segmentName:(id)a1 error:(unsigned char)a2 eventCategory:(unsigned long long)a3 metadata:(id)a4 dataType:(Class)a5;
- (id)initWithEventBody:(id)a0 timestamp:(double)a1;

@end
