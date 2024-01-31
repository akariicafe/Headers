@class NSArray, NSString;

@interface VCIntentDefinitionChange : NSObject <VCSYChange>

@property (class, readonly, nonatomic) int messageType;

@property (copy, nonatomic) NSArray *files;
@property (readonly, copy, nonatomic) NSString *checksum;
@property (nonatomic) long long changeType;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *sequencer;

- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0 error:(id *)a1;
- (id)initWithApplicationRecord:(id)a0 changeType:(long long)a1;
- (id)initWithObjectIdentifier:(id)a0 changeType:(long long)a1;
- (BOOL)writeTo:(id)a0 error:(id *)a1;

@end
