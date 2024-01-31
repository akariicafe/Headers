@class NSString, NSArray, AXMDataSummary, NSAttributedString;

@interface AXMDataSeriesDescriptor : NSObject <AXMChartDictionaryRepresentable, NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSAttributedString *attributedName;
@property (nonatomic) BOOL isContinuous;
@property (copy, nonatomic) NSArray *dataPoints;
@property (readonly, nonatomic) NSArray *xValues;
@property (readonly, nonatomic) NSArray *yValues;
@property (readonly, nonatomic) NSArray *additionalNumericalValues;
@property (readonly, nonatomic) NSArray *additionalCategoricalValues;
@property (readonly, nonatomic) double minimumDataValueOnTimeAxis;
@property (readonly, nonatomic) double maximumDataValueOnTimeAxis;
@property (readonly, nonatomic) AXMDataSummary *dataSummary;
@property (readonly, nonatomic) NSString *meanValueDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 isContinuous:(BOOL)a1 dataPoints:(id)a2;
- (id)_mutableArrayOfNSNullWithCount:(long long)a0;
- (void)setDataSummary:(id)a0;
- (void)_commonInitWithContinuous:(BOOL)a0 dataPoints:(id)a1;
- (id)initWithAttributedName:(id)a0 isContinuous:(BOOL)a1 dataPoints:(id)a2;
- (id)numericalValuesFromDataPointValues:(id)a0;

@end
