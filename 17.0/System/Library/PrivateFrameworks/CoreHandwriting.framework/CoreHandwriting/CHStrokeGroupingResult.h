@class NSSet, NSArray;

@interface CHStrokeGroupingResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_strokeGroupsSortedTopBottomLeftRight;
    NSArray *_textStrokeGroupsSortedByWritingOrientation;
    NSArray *_strokeGroupsSortedByWritingOrientation;
    NSArray *_textStrokeGroupsSortedByCTLD;
    NSArray *_strokeGroupsSortedByCTLD;
    NSArray *_textStrokeGroupClusters;
    NSArray *_strokeGroupClusters;
    NSSet *_textStrokeGroups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *strokeGroups;
@property (readonly, copy, nonatomic) NSSet *createdStrokeGroups;
@property (readonly, copy, nonatomic) NSSet *deletedStrokeGroups;
@property (readonly, copy, nonatomic) NSArray *strokeGroupClusters;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupClusters;
@property (readonly, copy, nonatomic) NSSet *textStrokeGroups;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStrokeGroups:(id)a0 createdStrokeGroups:(id)a1 deletedStrokeGroups:(id)a2;
- (id)strokeGroupsSortedBy:(unsigned long long)a0 textGroupsOnly:(BOOL)a1;

@end
