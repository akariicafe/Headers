@class NSString, GDGraphTopicEntityIdentifier, NSArray;

@interface GDGraphTopic : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphTopicEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *qid;
@property (readonly, copy, nonatomic) NSArray *allQid;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 qidField:(id)a1 allQidField:(id)a2;

@end
