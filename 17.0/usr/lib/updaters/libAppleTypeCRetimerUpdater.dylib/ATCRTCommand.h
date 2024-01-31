@class NSString, NSData;

@interface ATCRTCommand : NSObject

@property (readonly) unsigned int code;
@property (readonly) NSString *codeString;
@property (readonly) NSData *inputData;
@property (readonly) BOOL hasResponse;

- (id)init;
- (id)description;
- (id)initWithFourCharacterCode:(unsigned int)a0;

@end
