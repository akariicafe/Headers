@class NSDictionary, NSString;

@interface _ICQDetailFollowupSpecification : _ICQFollowupSpecification

@property (retain, nonatomic) NSDictionary *lockScreenInfo;
@property (retain, nonatomic) NSDictionary *followUpInfo;
@property (retain, nonatomic) NSDictionary *mesgTemplates;
@property (retain, nonatomic) NSDictionary *titleTemplates;
@property (retain, nonatomic) NSDictionary *subTitleTemplates;
@property (retain, nonatomic) NSDictionary *followupMesgTemplates;
@property (retain, nonatomic) NSDictionary *followupTitleTemplates;
@property (retain, nonatomic) NSString *bundleId;

+ (id)replaceWordsIn:(id)a0 with:(id)a1;

- (id)initWithServerDictionary:(id)a0;
- (void).cxx_destruct;
- (id)mesgWithKey:(id)a0;
- (void)postFollowupWithController:(id)a0 replaceExisting:(BOOL)a1 completion:(id /* block */)a2;
- (id)subTitleWithKey:(id)a0;
- (id)titleWithKey:(id)a0;

@end
