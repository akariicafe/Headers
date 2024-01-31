@class NSArray, NSString, UIImage, PKProtobufShareableCredentialMessage;

@interface PKShareableCredentialMessage : NSObject <PKSharingMessageExtensionMessage> {
    PKProtobufShareableCredentialMessage *_protoMessage;
}

@property (copy, nonatomic) NSArray *shareableCredentials;
@property (copy, nonatomic) NSString *dataString;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *policyIdentifier;
@property (copy, nonatomic) UIImage *passThumbnailImage;
@property (nonatomic) BOOL isPassInLibrary;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPending;
@property (readonly, nonatomic) BOOL isShareAcceptable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (id)init;
- (id)urlRepresentation;
- (void).cxx_destruct;
- (id)_shareableCredentialMessageDataURLWithData:(id)a0;
- (id)_shareableCredentialMessageDataWithDataURL:(id)a0;

@end
