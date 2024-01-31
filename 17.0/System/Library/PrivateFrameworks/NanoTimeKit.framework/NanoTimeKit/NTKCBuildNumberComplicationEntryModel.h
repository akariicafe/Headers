@class NSString;

@interface NTKCBuildNumberComplicationEntryModel : NTKTimelineEntryModel {
    NSString *prefixString;
    NSString *buildNum;
}

+ (id)modelWithBuildNum:(id)a0;

- (void).cxx_destruct;
- (id)entryForComplicationFamily:(long long)a0;

@end
