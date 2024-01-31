@class NSString, NSData;

@interface ACETaskCommand : NSObject

@property (readonly) unsigned int code;
@property (readonly) NSString *codeString;
@property (readonly) NSData *inputData;

- (id)init;
- (id)description;
- (id)initWithFourCharacterCode:(unsigned int)a0;

@end
