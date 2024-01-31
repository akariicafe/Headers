@class HAPDiagnosticsSnapshotOptionsWrapper, HAPDiagnosticsSnapshotAudioWrapper, HAPDiagnosticsSnapshotFormatWrapper, HAPDiagnosticsSnapshotTypeWrapper, NSString;

@interface HAPSupportedDiagnosticsSnapshot : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPDiagnosticsSnapshotFormatWrapper *format;
@property (retain, nonatomic) HAPDiagnosticsSnapshotTypeWrapper *type;
@property (retain, nonatomic) HAPDiagnosticsSnapshotAudioWrapper *audioDiagnostics;
@property (retain, nonatomic) HAPDiagnosticsSnapshotOptionsWrapper *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithFormat:(id)a0 type:(id)a1 audioDiagnostics:(id)a2 options:(id)a3;
- (id)serializeWithError:(id *)a0;

@end
