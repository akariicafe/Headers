@class NSDictionary;

@interface ISUserNotification : NSObject {
    NSDictionary *_dictionary;
    unsigned long long _optionFlags;
}

@property (readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long optionFlags;
@property long long allowedRetryCount;
@property long long currentRetryCount;
@property (retain) NSDictionary *userInfo;

- (id)init;
- (void)dealloc;
- (struct __CFUserNotification { } *)copyUserNotification;
- (id)initWithDictionary:(id)a0 options:(unsigned long long)a1;

@end
