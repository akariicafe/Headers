@class NSString;
@protocol CNVCardLineFactory;

@interface CNVCardLineGenerator : NSObject {
    NSString *_lineName;
    long long *_groupingCount;
    id<CNVCardLineFactory> _lineFactory;
}

+ (id)activityAlertGeneratorWithName:(id)a0 groupingCount:(long long *)a1;
+ (id)alternateDateComponentsGeneratorWithName:(id)a0 groupingcount:(long long *)a1;
+ (id)dateComponentsGeneratorWithName:(id)a0 groupingCount:(long long *)a1;
+ (id)emailGeneratorWithName:(id)a0 groupingCount:(long long *)a1;
+ (id)generatorWithName:(id)a0 groupingCount:(long long *)a1;
+ (id)instantMessagingGeneratorWithName:(id)a0 groupingCount:(long long *)a1;
+ (id)legacyInstantMessagingGeneratorWithName:(id)a0 groupingCount:(long long *)a1;
+ (id)phoneGeneratorWithName:(id)a0 groupingCount:(long long *)a1;
+ (id)socialProfileGeneratorWithName:(id)a0 groupingCount:(long long *)a1;
+ (id)streetAddressGeneratorWithName:(id)a0 groupingCount:(long long *)a1;

- (void).cxx_destruct;
- (void)addCustomLabel:(id)a0 toLine:(id)a1;
- (void)addPrimaryValueMarkerToLine:(id)a0;
- (void)addStandardLabel:(id)a0 toLine:(id)a1;
- (id)initWithName:(id)a0 groupingCount:(long long *)a1;
- (id)lineWithValue:(id)a0 label:(id)a1;
- (id)makeLineWithName:(id)a0 value:(id)a1;
- (id)standardLabelsForLabel:(id)a0;

@end
