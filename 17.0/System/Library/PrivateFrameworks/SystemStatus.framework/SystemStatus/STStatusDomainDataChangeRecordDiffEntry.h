@class NSString;
@protocol STStatusDomainDataDifferencing, STStatusDomainData, STStatusDomainDataDiff;

@interface STStatusDomainDataChangeRecordDiffEntry : NSObject <STStatusDomainDataChangeRecordEntry, BSDebugDescriptionProviding>

@property (readonly, nonatomic) id<STStatusDomainDataDiff> diff;
@property (readonly, nonatomic) id clientKey;
@property (readonly, nonatomic) unsigned long long entryType;
@property (readonly, nonatomic) id<STStatusDomainData, STStatusDomainDataDifferencing> data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithDiff:(id)a0 clientKey:(id)a1;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
