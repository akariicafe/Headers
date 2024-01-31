@class NSString, ICASPdfState, NSNumber;

@interface ICASPdfStateData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASPdfState *pdfStartState;
@property (readonly, nonatomic) ICASPdfState *pdfEndState;
@property (readonly, nonatomic) NSNumber *hasSmallStateUsage;
@property (readonly, nonatomic) NSNumber *hasMediumStateUsage;
@property (readonly, nonatomic) NSNumber *hasLargeStateUsage;
@property (readonly, nonatomic) NSNumber *hasFullScreenStateUsage;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithPdfStartState:(id)a0 pdfEndState:(id)a1 hasSmallStateUsage:(id)a2 hasMediumStateUsage:(id)a3 hasLargeStateUsage:(id)a4 hasFullScreenStateUsage:(id)a5;

@end
