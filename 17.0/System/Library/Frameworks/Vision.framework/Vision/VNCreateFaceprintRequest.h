@class NSArray, NSString;

@interface VNCreateFaceprintRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (nonatomic) BOOL forceFaceprintCreation;
@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createVNEntityIdentificationModelEntryPrintForRevision:(unsigned long long)a0 fromDescriptorData:(const void *)a1 length:(unsigned long long)a2 elementCount:(unsigned long long)a3 error:(id *)a4;
+ (Class)configurationClass;
+ (BOOL)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)privateRevisionsSet;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (unsigned long long)defaultRevision;
+ (id)publicRevisionsSet;

@end
