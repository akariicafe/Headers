@class NSNumber, NSString, GDEntityIdentifier, GDEntitySourceID, GDEntityFeatures;

@interface GDRankerItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double score;
@property (readonly, copy, nonatomic) GDEntityIdentifier *entityID;
@property (readonly, copy, nonatomic) GDEntitySourceID *sourceID;
@property (readonly, copy, nonatomic) NSString *entityClass;
@property (readonly, copy, nonatomic) GDEntityFeatures *features;
@property (readonly, nonatomic) double nameScore;
@property (readonly, nonatomic) double contextualScore;
@property (readonly, nonatomic) double entityRelevance;
@property (readonly, nonatomic) NSNumber *entityRelevanceInferenceEventId;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntityID:(id)a0 sourceID:(id)a1 entityClass:(id)a2 features:(id)a3 score:(double)a4 nameScore:(double)a5 contextualScore:(double)a6 entityRelevance:(double)a7 entityRelevanceInferenceEventId:(id)a8;
- (id)initWithEntityID:(id)a0 score:(double)a1;
- (id)initWithEntityID:(id)a0 sourceID:(id)a1 entityClass:(id)a2 features:(id)a3 score:(double)a4;

@end
