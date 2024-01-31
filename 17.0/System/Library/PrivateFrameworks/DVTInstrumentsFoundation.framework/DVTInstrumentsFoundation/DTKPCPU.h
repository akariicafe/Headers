@class NSString, NSMutableArray;

@interface DTKPCPU : NSObject {
    struct kpep_db { } *_kpepDB;
    NSString *_lookupName;
}

@property (retain, nonatomic) NSMutableArray *events;
@property (readonly, retain, nonatomic) NSString *name;

+ (void)initialize;
+ (id)cpuNamed:(id)a0 fromSerializedData:(id)a1 error:(id *)a2;
+ (id)localCPU:(id *)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_fixupAlias:(id)a0;
- (id)allAliasAndNameStrings;
- (id)eventFromName:(id)a0;
- (id)eventFromNameOrAlias:(id)a0;
- (id)initWithName:(id)a0 database:(struct kpep_db { } *)a1;
- (struct kpep_db { } *)kpepDB;
- (id)mnemonicToAliasMapping;

@end
