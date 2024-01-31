@class NSXPCListenerEndpoint, NSArray, NSXPCConnection, NSLocale;

@interface FSMessageConnection : NSObject <FSTaskOps, NSSecureCoding, FSTaskMessageOps>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) BOOL hasCompleted;
@property (readonly) NSArray *preferredLanguages;
@property (readonly) NSLocale *locale;

- (void)logMessage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (void)connect:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)completed:(id)a0 reply:(id /* block */)a1;
- (void)getLocalizationSetup:(id /* block */)a0;
- (id)localizedMessage:(id)a0 table:(id)a1 bundle:(id)a2;
- (id)localizedMessage:(id)a0 table:(id)a1 bundle:(id)a2 arguments:(char *)a3;
- (id)localizedMessage:(id)a0 table:(id)a1 bundle:(id)a2 array:(id)a3;
- (void)logLocalizedMessage:(id)a0 table:(id)a1 bundle:(id)a2;
- (void)logLocalizedMessage:(id)a0 table:(id)a1 bundle:(id)a2 arguments:(char *)a3;
- (void)logLocalizedMessage:(id)a0 table:(id)a1 bundle:(id)a2 array:(id)a3;
- (void)prompt:(id)a0 reply:(id /* block */)a1;
- (void)promptTrueFalse:(id)a0 reply:(id /* block */)a1;

@end
