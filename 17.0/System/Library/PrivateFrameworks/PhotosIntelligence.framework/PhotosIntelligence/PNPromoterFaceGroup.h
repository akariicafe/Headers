@class NSString, NSNumber, NSArray;

@interface PNPromoterFaceGroup : NSObject <PNFaceGroupProtocol> {
    NSNumber *_groupIdentifier;
    NSArray *_faceIdentifiers;
}

@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long faceCountInFaceGroup;
@property (readonly, nonatomic) BOOL isDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGroupIdentifier:(id)a0 andFaceIdentifiers:(id)a1;

@end
