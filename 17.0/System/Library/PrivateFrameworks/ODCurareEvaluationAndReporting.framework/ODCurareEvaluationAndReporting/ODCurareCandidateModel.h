@class NSString, NSURL, MLModelConfiguration, BMStoreStream;
@protocol _DKKnowledgeQuerying;

@interface ODCurareCandidateModel : NSObject

@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSString *modelTag;
@property (retain, nonatomic) MLModelConfiguration *modelConfiguration;
@property (nonatomic) BOOL isDefaultModel;
@property (nonatomic) BOOL isPersonalizableModel;
@property (retain, nonatomic) BMStoreStream *BMModelDataStream;
@property (retain, nonatomic) NSString *BMModelDataStreamIdentifier;
@property (copy, nonatomic) id /* block */ bmReceiveInputBlock;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> CDModelDataStream;
@property (retain, nonatomic) NSString *CDModelDataStreamIdentifier;
@property (retain, nonatomic) id CDQuery;

- (id)description;
- (void).cxx_destruct;
- (id)initWithModelURL:(id)a0 withCoreDuetStreamIdentifier:(id)a1 andMetadata:(id)a2;
- (id)initWithModelURL:(id)a0 withBiomeStream:(id)a1 andMetadata:(id)a2;
- (id)initWithModelURL:(id)a0 withBiomeStreamIdentifier:(id)a1 andMetadata:(id)a2;
- (BOOL)hasStreamFilter;
- (void)_setBiomeFilter:(id)a0 fromInclusive:(id)a1 toDate:(id)a2 toInclusive:(id)a3;
- (void)_setCoreDuetQuery:(id)a0 fromInclusive:(id)a1 toDate:(id)a2 toInclusive:(id)a3;
- (id)getDatesOfEventsForStream;
- (id)initWithModelURL:(id)a0 withBiomeStream:(id)a1 withBiomeStreamIdentifier:(id)a2 withModelTag:(id)a3 andMetadata:(id)a4;
- (id)initWithModelURL:(id)a0 withCoreDuetStream:(id)a1 withCoreDuetStreamIdentifier:(id)a2 andMetadata:(id)a3;
- (id)initWithModelURL:(id)a0 withCoreDuetStream:(id)a1 withCoreDuetStreamIdentifier:(id)a2 withModelTag:(id)a3 andMetadata:(id)a4;
- (void)setStreamFilter:(id)a0 fromInclusive:(id)a1 toDate:(id)a2 toInclusive:(id)a3;

@end
