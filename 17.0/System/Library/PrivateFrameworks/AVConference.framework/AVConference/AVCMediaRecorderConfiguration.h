@interface AVCMediaRecorderConfiguration : NSObject

@property (nonatomic) unsigned int mediaAvailability;

+ (id)newClientDictionary:(id)a0 clientPid:(int)a1;

- (id)dictionary;
- (id)description;

@end
