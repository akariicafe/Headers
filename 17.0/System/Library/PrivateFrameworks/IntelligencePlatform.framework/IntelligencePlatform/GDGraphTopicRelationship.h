@class NSArray, GDEntityIdentifier, NSString;
@protocol GDGraphEntityIdentifier;

@interface GDGraphTopicRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) GDEntityIdentifier<GDGraphEntityIdentifier> *topicId;
@property (readonly, copy, nonatomic) NSArray *allTopicId;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTopicIdField:(id)a0 allTopicIdField:(id)a1;

@end
