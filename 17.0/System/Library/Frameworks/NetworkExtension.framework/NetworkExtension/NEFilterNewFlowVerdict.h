@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL filterInbound;
@property BOOL filterOutbound;
@property unsigned long long peekInboundBytes;
@property unsigned long long peekOutboundBytes;
@property long long statisticsReportFrequency;

+ (id)URLAppendStringVerdictWithMapKey:(id)a0;
+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)filterDataVerdictWithFilterInbound:(BOOL)a0 peekInboundBytes:(unsigned long long)a1 filterOutbound:(BOOL)a2 peekOutboundBytes:(unsigned long long)a3;
+ (id)needRulesVerdict;
+ (id)pauseVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)a0 remediationButtonTextMapKey:(id)a1;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterAction;

@end
