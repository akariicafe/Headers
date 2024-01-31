@class NSString, PKSharingMessageExtensionRelayServerLocalProperties, NSURL, PKProtobufRelaySharingMessage;

@interface PKSharingMessageExtensionRelayServerMessage : PKSharingMessageExtensionCommonMessage <PKSharingMessageExtensionMessage> {
    PKProtobufRelaySharingMessage *_message;
    BOOL _useLegacyMessageFormat;
}

@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSURL *phoneMailboxURL;
@property (readonly, nonatomic) NSURL *watchMailboxURL;
@property (retain, nonatomic) NSString *provisioningCredentialHash;
@property (retain, nonatomic) NSString *carKeyReaderIdentifier;
@property (retain, nonatomic) PKSharingMessageExtensionRelayServerLocalProperties *localProperties;
@property (nonatomic) NSURL *overrideURL;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
