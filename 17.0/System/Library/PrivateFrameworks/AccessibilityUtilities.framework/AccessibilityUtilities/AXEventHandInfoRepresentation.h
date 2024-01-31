@class NSArray, NSString;

@interface AXEventHandInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char swipe;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) unsigned short initialFingerCount;
@property (nonatomic) unsigned short currentFingerCount;
@property (nonatomic) unsigned short lifetimeFingerCount;
@property (retain, nonatomic) NSArray *paths;
@property (nonatomic) unsigned char systemGesturePossible;
@property (nonatomic) unsigned int handIdentity;
@property (nonatomic) unsigned int handIndex;
@property (nonatomic) struct CGPoint { double x; double y; } handPosition;
@property (readonly, nonatomic) BOOL isStylus;
@property (nonatomic) unsigned int handEventMask;
@property (nonatomic) unsigned int additionalHandEventFlagsForGeneratedEvents;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessibilityEventRepresentationTabularDescription;

@end
