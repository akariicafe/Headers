@class NSString;

@interface SXInsertEdgeSpacing : NSObject <SXEdgeSpacing>

@property (readonly, nonatomic) struct _SXConvertibleValue { double value; unsigned long long unit; } left;
@property (readonly, nonatomic) struct _SXConvertibleValue { double value; unsigned long long unit; } right;
@property (readonly, nonatomic) struct _SXConvertibleValue { double value; unsigned long long unit; } top;
@property (readonly, nonatomic) struct _SXConvertibleValue { double value; unsigned long long unit; } bottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
