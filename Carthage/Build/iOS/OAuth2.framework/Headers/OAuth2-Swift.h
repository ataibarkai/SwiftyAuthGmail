// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import Foundation.NSURLSession;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface NSHTTPURLResponse (SWIFT_EXTENSION(OAuth2))

/// A localized string explaining the current statusCode.
@property (nonatomic, readonly, copy) NSString * __nonnull statusString;
@end


@interface NSMutableCharacterSet (SWIFT_EXTENSION(OAuth2))
@end


@interface NSURLRequest (SWIFT_EXTENSION(OAuth2))

/// Print the requests's headers and body to stdout.
- (void)oauth2_print;
@end

@class NSURLSession;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;


/// An NSURLSession delegate that allows you to use self-signed SSL certificates.
///
/// Doing so is a REALLY BAD IDEA, even in development environments where you can use real, free certificates that are valid a few months.
/// Still, sometimes you'll have to do this so this class is provided, but DO NOT SUBMIT your app using self-signed SSL certs to the App
/// Store. You have been warned!
SWIFT_CLASS("_TtC6OAuth229OAuth2DebugURLSessionDelegate")
@interface OAuth2DebugURLSessionDelegate : NSObject <NSURLSessionDelegate>
- (nonnull instancetype)initWithHost:(NSString * __nonnull)host OBJC_DESIGNATED_INITIALIZER;
- (void)URLSession:(NSURLSession * __nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * __nonnull)challenge completionHandler:(void (^ __nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * __nullable))completionHandler;
@end

@class NSURL;
@class NSCoder;


/// A request that can be signed by an OAuth2 instance.
SWIFT_CLASS("_TtC6OAuth213OAuth2Request")
@interface OAuth2Request : NSMutableURLRequest
- (nonnull instancetype)initWithURL:(NSURL * __nonnull)URL cachePolicy:(NSURLRequestCachePolicy)cachePolicy timeoutInterval:(NSTimeInterval)timeoutInterval OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIBarButtonItem;
@class UIWebView;
@class NSError;


/// A simple iOS web view controller that allows you to display the login/authorization screen.
SWIFT_CLASS("_TtC6OAuth223OAuth2WebViewController")
@interface OAuth2WebViewController : UIViewController <UIWebViewDelegate>

/// The URL to load on first show.
@property (nonatomic, strong) NSURL * __nullable startURL;

/// Assign to override the back button, shown when it's possible to go back in history. Will adjust target/action accordingly.
@property (nonatomic, strong) UIBarButtonItem * __nullable backButton;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)loadView;
- (void)viewWillAppear:(BOOL)animated;
- (void)loadURL:(NSURL * __nonnull)url;
- (BOOL)webView:(UIWebView * __nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * __nonnull)request navigationType:(UIWebViewNavigationType)navigationType;
- (void)webViewDidStartLoad:(UIWebView * __nonnull)webView;
- (void)webViewDidFinishLoad:(UIWebView * __nonnull)webView;
- (void)webView:(UIWebView * __nonnull)webView didFailLoadWithError:(NSError * __nullable)error;
@end

#pragma clang diagnostic pop