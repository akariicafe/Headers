@class NSString;

@interface CBALSService : CBHIDService {
    NSString *_desc;
}

@property (readonly) BOOL validData;
@property (readonly) double lux;
@property (readonly) BOOL colorSupport;
@property (readonly) double x;
@property (readonly) double y;
@property (readonly) double CCT;
@property (readonly) unsigned long long location;

- (void)dealloc;
- (id)description;
- (void)setEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)updateEventData;
- (id)copyDataInDictionary;
- (id)initWithHIDALSServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)resetEventData;

@end
