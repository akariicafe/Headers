@interface WFCloudKitWebServiceQueryFilter : NSObject

+ (id)filterWithCombinationOf:(id)a0 by:(unsigned long long)a1;
+ (id)filterWithComparisonOf:(id)a0 toInt:(long long)a1 by:(unsigned long long)a2;
+ (id)filterWithComparisonOf:(id)a0 toString:(id)a1 by:(unsigned long long)a2;
+ (id)filterWithComparisonOf:(id)a0 toStringArray:(id)a1 by:(unsigned long long)a2;

- (id)stringRepresentationWithRecordType:(id)a0;

@end
