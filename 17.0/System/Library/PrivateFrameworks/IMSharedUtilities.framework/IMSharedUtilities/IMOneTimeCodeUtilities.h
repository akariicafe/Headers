@interface IMOneTimeCodeUtilities : NSObject

- (id)createOTCFromMessageBody:(id)a0 sender:(id)a1 guid:(id)a2;
- (BOOL)isValidOneTimeCode:(id)a0;

@end
