@class PGGraphBuilder, NSSet, NSDictionary, NSString, PGMessageProfile;

@interface PGGraphIngestMessageProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (class, readonly, nonatomic) NSSet *loveEmojis;

@property (readonly, nonatomic) NSSet *personNodes;
@property (readonly, nonatomic) NSSet *contactIdentifiers;
@property (retain, nonatomic) PGMessageProfile *messageProfile;
@property (retain, nonatomic) NSDictionary *personLocalIdentifierByCNIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressComponentFromText:(id)a0 usingDataDetector:(id)a1;
+ (unsigned long long)numberOfEmojis:(id)a0 inText:(id)a1;

- (void).cxx_destruct;
- (BOOL)_isInterestingGroupChatWithPersons:(id)a0;
- (id)initWithGraphBuilder:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
