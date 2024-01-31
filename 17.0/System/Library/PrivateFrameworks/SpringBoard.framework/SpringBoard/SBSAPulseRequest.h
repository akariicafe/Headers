@class NSString;
@protocol SAElementIdentifying, NSCopying;

@interface SBSAPulseRequest : NSObject <SBSARequestRepresenting>

@property (readonly, copy, nonatomic) id<NSCopying, SAElementIdentifying> participantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParticipantIdentifier:(id)a0;

@end
