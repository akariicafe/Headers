@class NSDate, NSString, NSUUID, NSSet, CNContact, NSPersonNameComponents, CURangingMeasurement, NSNumber;

@interface SFAirDropNode : NSObject <SFAirDropNodeProtocol> {
    struct __SFOperation { } *_sender;
    NSPersonNameComponents *_nameComponents;
}

@property (readonly) NSDate *discoveryDate;
@property (retain) id node;
@property (retain) NSString *secondaryName;
@property (retain) NSSet *actualHandles;
@property (retain, nonatomic) CURangingMeasurement *rangingMeasurement;
@property (retain, nonatomic) NSSet *contactIDs;
@property (copy, nonatomic) NSString *derivedIntentIdentifier;
@property (getter=isMe) BOOL me;
@property (readonly, getter=isKnown) BOOL known;
@property (getter=isUnknown) BOOL unknown;
@property (getter=isMonogram) BOOL monogram;
@property (getter=isclassroomGroup) BOOL classroomGroup;
@property (getter=isClassroomCourse) BOOL classroomCourse;
@property (getter=isRapport) BOOL rapport;
@property (getter=isUltraWideBindCapable) BOOL ultraWideBindCapable;
@property (readonly) BOOL supportsCredentials;
@property (readonly) BOOL supportsFMF;
@property (readonly) BOOL supportsPasses;
@property (readonly) BOOL supportsMixedTypes;
@property (retain) NSUUID *nodeIdentifier;
@property (copy) NSString *contactIdentifier;
@property (copy) NSString *displayName;
@property (copy) NSString *realName;
@property (copy) NSString *model;
@property (retain) NSSet *formattedHandles;
@property (retain) NSNumber *suggestionIndex;
@property (retain) NSString *transportBundleID;
@property (getter=isClassroom) BOOL classroom;
@property (getter=isDisabled) BOOL disabled;
@property (getter=isSuggestion) BOOL suggestion;
@property long long selectionReason;
@property (retain) struct CGImage { } *displayIcon;
@property (retain) NSUUID *endpointUUID;
@property (retain) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeWithSFNode:(struct __SFNode { } *)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_updateDisplayIconWithSFNode:(struct __SFNode { } *)a0;
- (void)appendDiscoveryInfoToDisplayName:(id)a0;
- (void)cancelSend;
- (id)displayNameForLocale:(id)a0;
- (void)handleOperationCallback:(struct __SFOperation { } *)a0 event:(long long)a1 withResults:(id)a2;
- (void)startSendForBundleID:(id)a0 sessionID:(id)a1 items:(id)a2 description:(id)a3 previewImage:(struct CGImage { } *)a4 fromShareSheet:(BOOL)a5;
- (void)updateDisplayName;
- (void)updateWithSFNode:(struct __SFNode { } *)a0;

@end
