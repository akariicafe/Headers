@class NSString, NSArray, NSMutableArray;

@interface BRCSharingLookupParticipantsOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSArray *_userIdentities;
    NSMutableArray *_shareParticipants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
