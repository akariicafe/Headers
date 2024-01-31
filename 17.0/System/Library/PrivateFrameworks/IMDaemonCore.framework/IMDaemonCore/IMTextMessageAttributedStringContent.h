@class NSArray, NSAttributedString;

@interface IMTextMessageAttributedStringContent : NSObject

@property (readonly, nonatomic) NSAttributedString *messageBodyWithNativeAttributes;
@property (readonly, nonatomic) NSArray *fileTransferGuids;

- (void).cxx_destruct;
- (id)initWithMessageBodyWithNativeAttributes:(id)a0 fileTransferGuids:(id)a1;

@end
